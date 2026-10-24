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

// Function: SetBlendField6AC_1D58F0
// Address: 0x1d58f0 - 0x1d5998
void SetBlendField6AC_1D58F0_0x1d58f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBlendField6AC_1D58F0_0x1d58f0");
#endif

    switch (ctx->pc) {
        case 0x1d5978u: goto label_1d5978;
        case 0x1d5988u: goto label_1d5988;
        default: break;
    }

    ctx->pc = 0x1d58f0u;

    // 0x1d58f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d58f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d58f4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d58f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58f8: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D58F8u;
    {
        const bool branch_taken_0x1d58f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58F8u;
        // 0x1d58fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58f8) {
            ctx->pc = 0x1D5980u;
            goto label_1d5980;
        }
    }
    ctx->pc = 0x1D5900u;
    // 0x1d5900: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1d5900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1d5904: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d5904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d5908: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1d5908u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1d590c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1d590cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1d5910: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x1d5910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1d5914: 0x34c600a0  ori         $a2, $a2, 0xA0
    ctx->pc = 0x1d5914u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)160);
    // 0x1d5918: 0x34a50060  ori         $a1, $a1, 0x60
    ctx->pc = 0x1d5918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
    // 0x1d591c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1d591cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1d5920: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d5920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d5924: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d5924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d5928: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d5928u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d592c: 0x34a56000  ori         $a1, $a1, 0x6000
    ctx->pc = 0x1d592cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24576);
    // 0x1d5930: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d5930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d5934: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1d5934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d5938: 0x34c6a000  ori         $a2, $a2, 0xA000
    ctx->pc = 0x1d5938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)40960);
    // 0x1d593c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1d593cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d5940: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1d5940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1d5944: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1d5944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d5948: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d5948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d594c: 0x3c0300a0  lui         $v1, 0xA0
    ctx->pc = 0x1d594cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)160 << 16));
    // 0x1d5950: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1d5950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1d5954: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d5954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d5958: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d5958u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d595c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1d595cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d5960: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d5960u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d5964: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d5964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d5968: 0x24e406ac  addiu       $a0, $a3, 0x6AC
    ctx->pc = 0x1d5968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1708));
    // 0x1d596c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d596cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d5970: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1D5970u;
    SET_GPR_U32(ctx, 31, 0x1D5978u);
    ctx->pc = 0x1D5974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5970u;
    // 0x1d5974: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1D5970u, 0x1D5978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5978u;
label_1d5978:
    // 0x1d5978: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5978u;
    {
        const bool branch_taken_0x1d5978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5978u;
        // 0x1d597c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5978) {
            ctx->pc = 0x1D598Cu;
            goto label_1d598c;
        }
    }
    ctx->pc = 0x1D5980u;
label_1d5980:
    // 0x1d5980: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1D5980u;
    SET_GPR_U32(ctx, 31, 0x1D5988u);
    ctx->pc = 0x1D5984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5980u;
    // 0x1d5984: 0x24e406ac  addiu       $a0, $a3, 0x6AC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1708));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1D5980u, 0x1D5988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5988u;
label_1d5988:
    // 0x1d5988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d598c:
    // 0x1d598c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D598Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D598Cu;
        // 0x1d5990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D598Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5994u;
    // 0x1d5994: 0x0  nop
    ctx->pc = 0x1d5994u;
    // NOP
    ctx->pc = 0x1d5998u;
}
