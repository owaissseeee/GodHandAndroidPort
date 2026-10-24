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

// Function: ForwardInitBuffer_3141D0
// Address: 0x3141d0 - 0x314240
void ForwardInitBuffer_3141D0_0x3141d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_3141D0_0x3141d0");
#endif

    switch (ctx->pc) {
        case 0x314204u: goto label_314204;
        case 0x31421cu: goto label_31421c;
        case 0x314224u: goto label_314224;
        default: break;
    }

    ctx->pc = 0x3141d0u;

    // 0x3141d0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3141d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3141d4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3141d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3141d8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3141d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3141dc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3141dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3141e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3141e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3141e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3141e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3141e8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3141E8u;
    {
        const bool branch_taken_0x3141e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3141ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3141E8u;
        // 0x3141ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3141e8) {
            ctx->pc = 0x31422Cu;
            goto label_31422c;
        }
    }
    ctx->pc = 0x3141F0u;
    // 0x3141f0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3141f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3141f4: 0x24040fa0  addiu       $a0, $zero, 0xFA0
    ctx->pc = 0x3141f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    // 0x3141f8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3141f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3141fc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3141FCu;
    SET_GPR_U32(ctx, 31, 0x314204u);
    ctx->pc = 0x314200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3141FCu;
    // 0x314200: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3141FCu, 0x314204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314204u;
label_314204:
    // 0x314204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314208: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314208u;
    {
        const bool branch_taken_0x314208 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314208u;
        // 0x31420c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314208) {
            ctx->pc = 0x31422Cu;
            goto label_31422c;
        }
    }
    ctx->pc = 0x314210u;
    // 0x314210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314214: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314214u;
    SET_GPR_U32(ctx, 31, 0x31421Cu);
    ctx->pc = 0x314218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314214u;
    // 0x314218: 0x24060fa0  addiu       $a2, $zero, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314214u, 0x31421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31421Cu;
label_31421c:
    // 0x31421c: 0xc064072  jal         func_1901C8
    ctx->pc = 0x31421Cu;
    SET_GPR_U32(ctx, 31, 0x314224u);
    ctx->pc = 0x314220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31421Cu;
    // 0x314220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1901C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1901C8u, 0x31421Cu, 0x314224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314224u;
label_314224:
    // 0x314224: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314224u;
    {
        const bool branch_taken_0x314224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314224u;
        // 0x314228: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314224) {
            ctx->pc = 0x314234u;
            goto label_314234;
        }
    }
    ctx->pc = 0x31422Cu;
label_31422c:
    // 0x31422c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31422cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314230: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314234:
    // 0x314234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314238: 0x3e00008  jr          $ra
    ctx->pc = 0x314238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314238u;
        // 0x31423c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314240u;
}
