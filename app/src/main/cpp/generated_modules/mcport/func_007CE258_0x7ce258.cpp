#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CE258
// Address: 0x7ce258 - 0x7ce2e8
void func_007CE258_0x7ce258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CE258_0x7ce258");
#endif

    switch (ctx->pc) {
        case 0x7ce28cu: goto label_7ce28c;
        case 0x7ce2a0u: goto label_7ce2a0;
        case 0x7ce2bcu: goto label_7ce2bc;
        default: break;
    }

    ctx->pc = 0x7ce258u;

    // 0x7ce258: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7ce258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7ce25c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7ce25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x7ce260: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x7ce260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x7ce264: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7ce264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce268: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x7ce268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x7ce26c: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x7CE26Cu;
    {
        const bool branch_taken_0x7ce26c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE26Cu;
        // 0x7ce270: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce26c) {
            ctx->pc = 0x7CE2C4u;
            goto label_7ce2c4;
        }
    }
    ctx->pc = 0x7CE274u;
    // 0x7ce274: 0x3c12007d  lui         $s2, 0x7D
    ctx->pc = 0x7ce274u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)125 << 16));
    // 0x7ce278: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x7ce278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x7ce27c: 0x26431f40  addiu       $v1, $s2, 0x1F40
    ctx->pc = 0x7ce27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8000));
    // 0x7ce280: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x7ce280u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x7ce284: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x7CE284u;
    SET_GPR_U32(ctx, 31, 0x7CE28Cu);
    ctx->pc = 0x7CE288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE284u;
    // 0x7ce288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x7CE284u, 0x7CE28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE28Cu;
label_7ce28c:
    // 0x7ce28c: 0x2c420400  sltiu       $v0, $v0, 0x400
    ctx->pc = 0x7ce28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x7ce290: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CE290u;
    {
        const bool branch_taken_0x7ce290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ce290) {
            ctx->pc = 0x7CE294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CE290u;
            // 0x7ce294: 0x241003ff  addiu       $s0, $zero, 0x3FF (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CE2A4u;
            goto label_7ce2a4;
        }
    }
    ctx->pc = 0x7CE298u;
    // 0x7ce298: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x7CE298u;
    SET_GPR_U32(ctx, 31, 0x7CE2A0u);
    ctx->pc = 0x7CE29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE298u;
    // 0x7ce29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x7CE298u, 0x7CE2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE2A0u;
label_7ce2a0:
    // 0x7ce2a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7ce2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ce2a4:
    // 0x7ce2a4: 0x26421f40  addiu       $v0, $s2, 0x1F40
    ctx->pc = 0x7ce2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8000));
    // 0x7ce2a8: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x7ce2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x7ce2ac: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x7ce2acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x7ce2b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7ce2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce2b4: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x7CE2B4u;
    SET_GPR_U32(ctx, 31, 0x7CE2BCu);
    ctx->pc = 0x7CE2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE2B4u;
    // 0x7ce2b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x7CE2B4u, 0x7CE2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE2BCu;
label_7ce2bc:
    // 0x7ce2bc: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x7ce2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x7ce2c0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x7ce2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_7ce2c4:
    // 0x7ce2c4: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7ce2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7ce2c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x7ce2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ce2cc: 0x8c4407b8  lw          $a0, 0x7B8($v0)
    ctx->pc = 0x7ce2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7D07B8u));
    // 0x7ce2d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x7ce2d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ce2d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7ce2d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ce2d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7ce2d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ce2dc: 0x80ebf34  j           func_3AFCD0
    ctx->pc = 0x7CE2DCu;
    ctx->pc = 0x7CE2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE2DCu;
    // 0x7ce2e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCD0u, 0x7CE2DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7CE2E4u;
    // 0x7ce2e4: 0x0  nop
    ctx->pc = 0x7ce2e4u;
    // NOP
    ctx->pc = 0x7ce2e8u;
}
} // namespace gh_mcport
