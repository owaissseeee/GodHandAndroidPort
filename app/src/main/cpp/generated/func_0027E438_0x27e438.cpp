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

// Function: func_0027E438
// Address: 0x27e438 - 0x27e4e0
void func_0027E438_0x27e438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027E438_0x27e438");
#endif

    switch (ctx->pc) {
        case 0x27e494u: goto label_27e494;
        case 0x27e4b0u: goto label_27e4b0;
        case 0x27e4bcu: goto label_27e4bc;
        case 0x27e4c8u: goto label_27e4c8;
        default: break;
    }

    ctx->pc = 0x27e438u;

    // 0x27e438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27e438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27e43c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27e43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27e440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27e444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e448: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x27e448u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27e44c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27e44cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27e450: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E450u;
    {
        const bool branch_taken_0x27e450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E450u;
        // 0x27e454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e450) {
            ctx->pc = 0x27E468u;
            goto label_27e468;
        }
    }
    ctx->pc = 0x27E458u;
    // 0x27e458: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27E458u;
    {
        const bool branch_taken_0x27e458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27e458) {
            ctx->pc = 0x27E4A0u;
            goto label_27e4a0;
        }
    }
    ctx->pc = 0x27E460u;
    // 0x27e460: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27E460u;
    {
        const bool branch_taken_0x27e460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E460u;
        // 0x27e464: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e460) {
            ctx->pc = 0x27E4CCu;
            goto label_27e4cc;
        }
    }
    ctx->pc = 0x27E468u;
label_27e468:
    // 0x27e468: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27e468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27e46c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e470: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27e470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27e474: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27e474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e478: 0x8c450190  lw          $a1, 0x190($v0)
    ctx->pc = 0x27e478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 400)));
    // 0x27e47c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27e47cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e480: 0x8c460194  lw          $a2, 0x194($v0)
    ctx->pc = 0x27e480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
    // 0x27e484: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27e484u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e488: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27e488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27e48c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27E48Cu;
    SET_GPR_U32(ctx, 31, 0x27E494u);
    ctx->pc = 0x27E490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E48Cu;
    // 0x27e490: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27E48Cu, 0x27E494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E494u;
label_27e494:
    // 0x27e494: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27e494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27e498: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27e498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27e49c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27e49cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27e4a0:
    // 0x27e4a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27e4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27e4a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27e4a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27e4a8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27E4A8u;
    SET_GPR_U32(ctx, 31, 0x27E4B0u);
    ctx->pc = 0x27E4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E4A8u;
    // 0x27e4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27E4A8u, 0x27E4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E4B0u;
label_27e4b0:
    // 0x27e4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e4b4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x27E4B4u;
    SET_GPR_U32(ctx, 31, 0x27E4BCu);
    ctx->pc = 0x27E4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E4B4u;
    // 0x27e4b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x27E4B4u, 0x27E4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E4BCu;
label_27e4bc:
    // 0x27e4bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e4c0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x27E4C0u;
    SET_GPR_U32(ctx, 31, 0x27E4C8u);
    ctx->pc = 0x27E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E4C0u;
    // 0x27e4c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x27E4C0u, 0x27E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E4C8u;
label_27e4c8:
    // 0x27e4c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27e4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27e4cc:
    // 0x27e4cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e4d0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x27e4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27e4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x27E4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4D4u;
        // 0x27e4d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E4DCu;
    // 0x27e4dc: 0x0  nop
    ctx->pc = 0x27e4dcu;
    // NOP
    ctx->pc = 0x27e4e0u;
}
