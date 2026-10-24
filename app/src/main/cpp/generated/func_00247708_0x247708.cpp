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

// Function: func_00247708
// Address: 0x247708 - 0x2477f0
void func_00247708_0x247708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00247708_0x247708");
#endif

    switch (ctx->pc) {
        case 0x24776cu: goto label_24776c;
        case 0x247798u: goto label_247798;
        case 0x2477acu: goto label_2477ac;
        case 0x2477bcu: goto label_2477bc;
        case 0x2477d0u: goto label_2477d0;
        case 0x2477dcu: goto label_2477dc;
        default: break;
    }

    ctx->pc = 0x247708u;

    // 0x247708: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24770c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x24770cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x247710: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x247710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x247714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247718: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24771c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x24771cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x247720: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x247720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x247724: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x247724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x247728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24772c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x24772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x247730: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x247730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x247734: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x247734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x247738: 0x920602f6  lbu         $a2, 0x2F6($s0)
    ctx->pc = 0x247738u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24773c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x24773cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x247740: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x247740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x247744: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x247744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x247748: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x247748u;
    {
        const bool branch_taken_0x247748 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247748u;
        // 0x24774c: 0xae030250  sw          $v1, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247748) {
            ctx->pc = 0x247764u;
            goto label_247764;
        }
    }
    ctx->pc = 0x247750u;
    // 0x247750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247754: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x247754u;
    {
        const bool branch_taken_0x247754 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x247754) {
            ctx->pc = 0x2477A4u;
            goto label_2477a4;
        }
    }
    ctx->pc = 0x24775Cu;
    // 0x24775c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x24775Cu;
    {
        const bool branch_taken_0x24775c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24775Cu;
        // 0x247760: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24775c) {
            ctx->pc = 0x2477E0u;
            goto label_2477e0;
        }
    }
    ctx->pc = 0x247764u;
label_247764:
    // 0x247764: 0xc09d91a  jal         func_276468
    ctx->pc = 0x247764u;
    SET_GPR_U32(ctx, 31, 0x24776Cu);
    ctx->pc = 0x247768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247764u;
    // 0x247768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x247764u, 0x24776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24776Cu;
label_24776c:
    // 0x24776c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x24776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x247770: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x247770u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x247774: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x247774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x247778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24777c: 0x8c652148  lw          $a1, 0x2148($v1)
    ctx->pc = 0x24777cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8520)));
    // 0x247780: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x247780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247784: 0x8c66214c  lw          $a2, 0x214C($v1)
    ctx->pc = 0x247784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8524)));
    // 0x247788: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x247788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24778c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24778cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x247790: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x247790u;
    SET_GPR_U32(ctx, 31, 0x247798u);
    ctx->pc = 0x247794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247790u;
    // 0x247794: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x247790u, 0x247798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247798u;
label_247798:
    // 0x247798: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x247798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24779c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2477a0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2477a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2477a4:
    // 0x2477a4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2477A4u;
    SET_GPR_U32(ctx, 31, 0x2477ACu);
    ctx->pc = 0x2477A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2477A4u;
    // 0x2477a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2477A4u, 0x2477ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2477ACu;
label_2477ac:
    // 0x2477ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2477ACu;
    {
        const bool branch_taken_0x2477ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2477ac) {
            ctx->pc = 0x2477BCu;
            goto label_2477bc;
        }
    }
    ctx->pc = 0x2477B4u;
    // 0x2477b4: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2477B4u;
    SET_GPR_U32(ctx, 31, 0x2477BCu);
    ctx->pc = 0x2477B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2477B4u;
    // 0x2477b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2477B4u, 0x2477BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2477BCu;
label_2477bc:
    // 0x2477bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2477bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2477c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2477c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2477c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2477c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2477c8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2477C8u;
    SET_GPR_U32(ctx, 31, 0x2477D0u);
    ctx->pc = 0x2477CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2477C8u;
    // 0x2477cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2477C8u, 0x2477D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2477D0u;
label_2477d0:
    // 0x2477d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2477d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2477d4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2477D4u;
    SET_GPR_U32(ctx, 31, 0x2477DCu);
    ctx->pc = 0x2477D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2477D4u;
    // 0x2477d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2477D4u, 0x2477DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2477DCu;
label_2477dc:
    // 0x2477dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2477dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2477e0:
    // 0x2477e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2477e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2477e4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2477e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2477e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2477E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2477ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2477E8u;
        // 0x2477ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2477E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2477F0u;
}
