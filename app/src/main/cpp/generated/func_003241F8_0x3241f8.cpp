#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_003241F8
// Address: 0x3241f8 - 0x324258
void func_003241F8_0x3241f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003241F8_0x3241f8");
#endif

    switch (ctx->pc) {
        case 0x324218u: goto label_324218;
        case 0x324220u: goto label_324220;
        case 0x324234u: goto label_324234;
        default: break;
    }

    ctx->pc = 0x3241f8u;

    // 0x3241f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3241f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3241fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3241fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324200: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x324200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x324204: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x324204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x324208: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x324208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32420c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32420cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x324210: 0xc0cf99e  jal         func_33E678
    ctx->pc = 0x324210u;
    SET_GPR_U32(ctx, 31, 0x324218u);
    ctx->pc = 0x324214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324210u;
    // 0x324214: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x324210u, 0x324218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324218u;
label_324218:
    // 0x324218: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x324218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x32421c: 0x2450aec8  addiu       $s0, $v0, -0x5138
    ctx->pc = 0x32421cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946504));
label_324220:
    // 0x324220: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x324220u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x324224: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x324224u;
    {
        const bool branch_taken_0x324224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x324224) {
            ctx->pc = 0x324228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324224u;
            // 0x324228: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324238u;
            goto label_324238;
        }
    }
    ctx->pc = 0x32422Cu;
    // 0x32422c: 0xc0c9042  jal         func_324108
    ctx->pc = 0x32422Cu;
    SET_GPR_U32(ctx, 31, 0x324234u);
    ctx->pc = 0x324230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32422Cu;
    // 0x324230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324108u, 0x32422Cu, 0x324234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324234u;
label_324234:
    // 0x324234: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x324234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_324238:
    // 0x324238: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x324238u;
    {
        const bool branch_taken_0x324238 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x32423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324238u;
        // 0x32423c: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324238) {
            ctx->pc = 0x324220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324220;
        }
    }
    ctx->pc = 0x324240u;
    // 0x324240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324244: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x324244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324248: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x324248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32424c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32424cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x324250: 0x80cf9a4  j           func_33E690
    ctx->pc = 0x324250u;
    ctx->pc = 0x324254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324250u;
    // 0x324254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x324250u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x324258u;
}
