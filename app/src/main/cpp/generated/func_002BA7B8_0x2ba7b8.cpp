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

// Function: func_002BA7B8
// Address: 0x2ba7b8 - 0x2ba818
void func_002BA7B8_0x2ba7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA7B8_0x2ba7b8");
#endif

    switch (ctx->pc) {
        case 0x2ba7b8u: goto label_2ba7b8;
        case 0x2ba7bcu: goto label_2ba7bc;
        case 0x2ba7c0u: goto label_2ba7c0;
        case 0x2ba7c4u: goto label_2ba7c4;
        case 0x2ba7c8u: goto label_2ba7c8;
        case 0x2ba7ccu: goto label_2ba7cc;
        case 0x2ba7d0u: goto label_2ba7d0;
        case 0x2ba7d4u: goto label_2ba7d4;
        case 0x2ba7d8u: goto label_2ba7d8;
        case 0x2ba7dcu: goto label_2ba7dc;
        case 0x2ba7e0u: goto label_2ba7e0;
        case 0x2ba7e4u: goto label_2ba7e4;
        case 0x2ba7e8u: goto label_2ba7e8;
        case 0x2ba7ecu: goto label_2ba7ec;
        case 0x2ba7f0u: goto label_2ba7f0;
        case 0x2ba7f4u: goto label_2ba7f4;
        case 0x2ba7f8u: goto label_2ba7f8;
        case 0x2ba7fcu: goto label_2ba7fc;
        case 0x2ba800u: goto label_2ba800;
        case 0x2ba804u: goto label_2ba804;
        case 0x2ba808u: goto label_2ba808;
        case 0x2ba80cu: goto label_2ba80c;
        case 0x2ba810u: goto label_2ba810;
        case 0x2ba814u: goto label_2ba814;
        default: break;
    }

    ctx->pc = 0x2ba7b8u;

label_2ba7b8:
    // 0x2ba7b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ba7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ba7bc:
    // 0x2ba7bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ba7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ba7c0:
    // 0x2ba7c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ba7c4:
    // 0x2ba7c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ba7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba7c8:
    // 0x2ba7c8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2ba7c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2ba7cc:
    // 0x2ba7cc: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x2ba7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_2ba7d0:
    // 0x2ba7d0: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x2ba7d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_2ba7d4:
    // 0x2ba7d4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x2ba7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2ba7d8:
    // 0x2ba7d8: 0x60f809  jalr        $v1
label_2ba7dc:
    if (ctx->pc == 0x2BA7DCu) {
        ctx->pc = 0x2BA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA7D8u;
        // 0x2ba7dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA7E0u;
        goto label_2ba7e0;
    }
    ctx->pc = 0x2BA7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BA7E0u);
        ctx->pc = 0x2BA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA7D8u;
        // 0x2ba7dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA7D8u, 0x2BA7E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA7E0u;
label_2ba7e0:
    // 0x2ba7e0: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x2ba7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_2ba7e4:
    // 0x2ba7e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ba7e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2ba7e8:
    // 0x2ba7e8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2ba7e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2ba7ec:
    // 0x2ba7ec: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2ba7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2ba7f0:
    // 0x2ba7f0: 0x60f809  jalr        $v1
label_2ba7f4:
    if (ctx->pc == 0x2BA7F4u) {
        ctx->pc = 0x2BA7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA7F0u;
        // 0x2ba7f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA7F8u;
        goto label_2ba7f8;
    }
    ctx->pc = 0x2BA7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BA7F8u);
        ctx->pc = 0x2BA7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA7F0u;
        // 0x2ba7f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA7F0u, 0x2BA7F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA7F8u;
label_2ba7f8:
    // 0x2ba7f8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2ba7f8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2ba7fc:
    // 0x2ba7fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba800:
    // 0x2ba800: 0xe61400e4  swc1        $f20, 0xE4($s0)
    ctx->pc = 0x2ba800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_2ba804:
    // 0x2ba804: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ba804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba808:
    // 0x2ba808: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2ba808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ba80c:
    // 0x2ba80c: 0x3e00008  jr          $ra
label_2ba810:
    if (ctx->pc == 0x2BA810u) {
        ctx->pc = 0x2BA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA80Cu;
        // 0x2ba810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA814u;
        goto label_2ba814;
    }
    ctx->pc = 0x2BA80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA80Cu;
        // 0x2ba810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA814u;
label_2ba814:
    // 0x2ba814: 0x0  nop
    ctx->pc = 0x2ba814u;
    // NOP
    ctx->pc = 0x2ba818u;
}
