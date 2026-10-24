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

// Function: SetBlendField5B4_1D57A0
// Address: 0x1d57a0 - 0x1d5848
void SetBlendField5B4_1D57A0_0x1d57a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBlendField5B4_1D57A0_0x1d57a0");
#endif

    switch (ctx->pc) {
        case 0x1d5828u: goto label_1d5828;
        case 0x1d5838u: goto label_1d5838;
        default: break;
    }

    ctx->pc = 0x1d57a0u;

    // 0x1d57a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d57a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d57a4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d57a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57a8: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D57A8u;
    {
        const bool branch_taken_0x1d57a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D57ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57A8u;
        // 0x1d57ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57a8) {
            ctx->pc = 0x1D5830u;
            goto label_1d5830;
        }
    }
    ctx->pc = 0x1D57B0u;
    // 0x1d57b0: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1d57b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1d57b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d57b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d57b8: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1d57b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1d57bc: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1d57bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1d57c0: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x1d57c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1d57c4: 0x34c600a0  ori         $a2, $a2, 0xA0
    ctx->pc = 0x1d57c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)160);
    // 0x1d57c8: 0x34a50060  ori         $a1, $a1, 0x60
    ctx->pc = 0x1d57c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
    // 0x1d57cc: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1d57ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1d57d0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d57d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d57d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d57d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d57d8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d57d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d57dc: 0x34a56000  ori         $a1, $a1, 0x6000
    ctx->pc = 0x1d57dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24576);
    // 0x1d57e0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d57e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d57e4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1d57e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d57e8: 0x34c6a000  ori         $a2, $a2, 0xA000
    ctx->pc = 0x1d57e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)40960);
    // 0x1d57ec: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1d57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d57f0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1d57f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1d57f4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1d57f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d57f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d57f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d57fc: 0x3c0300a0  lui         $v1, 0xA0
    ctx->pc = 0x1d57fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)160 << 16));
    // 0x1d5800: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1d5800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1d5804: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d5804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d5808: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d5808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d580c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1d580cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d5810: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d5810u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d5814: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d5814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d5818: 0x24e405b4  addiu       $a0, $a3, 0x5B4
    ctx->pc = 0x1d5818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1460));
    // 0x1d581c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d581cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d5820: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1D5820u;
    SET_GPR_U32(ctx, 31, 0x1D5828u);
    ctx->pc = 0x1D5824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5820u;
    // 0x1d5824: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1D5820u, 0x1D5828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5828u;
label_1d5828:
    // 0x1d5828: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5828u;
    {
        const bool branch_taken_0x1d5828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5828u;
        // 0x1d582c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5828) {
            ctx->pc = 0x1D583Cu;
            goto label_1d583c;
        }
    }
    ctx->pc = 0x1D5830u;
label_1d5830:
    // 0x1d5830: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1D5830u;
    SET_GPR_U32(ctx, 31, 0x1D5838u);
    ctx->pc = 0x1D5834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5830u;
    // 0x1d5834: 0x24e405b4  addiu       $a0, $a3, 0x5B4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1D5830u, 0x1D5838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5838u;
label_1d5838:
    // 0x1d5838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d583c:
    // 0x1d583c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D583Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D583Cu;
        // 0x1d5840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D583Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5844u;
    // 0x1d5844: 0x0  nop
    ctx->pc = 0x1d5844u;
    // NOP
    ctx->pc = 0x1d5848u;
}
