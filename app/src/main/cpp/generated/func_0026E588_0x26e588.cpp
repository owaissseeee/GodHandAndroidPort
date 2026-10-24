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

// Function: func_0026E588
// Address: 0x26e588 - 0x26e6b0
void func_0026E588_0x26e588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026E588_0x26e588");
#endif

    switch (ctx->pc) {
        case 0x26e628u: goto label_26e628;
        case 0x26e634u: goto label_26e634;
        case 0x26e67cu: goto label_26e67c;
        default: break;
    }

    ctx->pc = 0x26e588u;

    // 0x26e588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26e588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26e58c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26e58cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26e590: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26e590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26e594: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26e594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26e598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26e598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e59c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26e59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26e5a0: 0xc60016c0  lwc1        $f0, 0x16C0($s0)
    ctx->pc = 0x26e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e5a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26e5a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e5a8: 0x0  nop
    ctx->pc = 0x26e5a8u;
    // NOP
    // 0x26e5ac: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x26E5ACu;
    {
        const bool branch_taken_0x26e5ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5ACu;
        // 0x26e5b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5ac) {
            ctx->pc = 0x26E69Cu;
            goto label_26e69c;
        }
    }
    ctx->pc = 0x26E5B4u;
    // 0x26e5b4: 0x8e021644  lw          $v0, 0x1644($s0)
    ctx->pc = 0x26e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5700)));
    // 0x26e5b8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x26e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x26e5bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26e5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26e5c0: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x26E5C0u;
    {
        const bool branch_taken_0x26e5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5C0u;
        // 0x26e5c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5c0) {
            ctx->pc = 0x26E69Cu;
            goto label_26e69c;
        }
    }
    ctx->pc = 0x26E5C8u;
    // 0x26e5c8: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x26e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x26e5cc: 0x2444fdf8  addiu       $a0, $v0, -0x208
    ctx->pc = 0x26e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966776));
    // 0x26e5d0: 0x2c830077  sltiu       $v1, $a0, 0x77
    ctx->pc = 0x26e5d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)119) ? 1 : 0);
    // 0x26e5d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E5D4u;
    {
        const bool branch_taken_0x26e5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E5D4u;
        // 0x26e5d8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e5d4) {
            ctx->pc = 0x26E5F4u;
            goto label_26e5f4;
        }
    }
    ctx->pc = 0x26E5DCu;
    // 0x26e5dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26e5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26e5e0: 0x24425970  addiu       $v0, $v0, 0x5970
    ctx->pc = 0x26e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22896));
    // 0x26e5e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e5e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e5ec: 0x800008  jr          $a0
    ctx->pc = 0x26E5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E5F4u: goto label_26e5f4;
            case 0x26E698u: goto label_26e698;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E5ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26E5F4u;
label_26e5f4:
    // 0x26e5f4: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x26e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e5f8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x26e5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x26e5fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e600: 0x0  nop
    ctx->pc = 0x26e600u;
    // NOP
    // 0x26e604: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26e604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e608: 0x0  nop
    ctx->pc = 0x26e608u;
    // NOP
    // 0x26e60c: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x26E60Cu;
    {
        const bool branch_taken_0x26e60c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E60Cu;
        // 0x26e610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e60c) {
            ctx->pc = 0x26E69Cu;
            goto label_26e69c;
        }
    }
    ctx->pc = 0x26E614u;
    // 0x26e614: 0x8e0216ec  lw          $v0, 0x16EC($s0)
    ctx->pc = 0x26e614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
    // 0x26e618: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x26E618u;
    {
        const bool branch_taken_0x26e618 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x26E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E618u;
        // 0x26e61c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e618) {
            ctx->pc = 0x26E69Cu;
            goto label_26e69c;
        }
    }
    ctx->pc = 0x26E620u;
    // 0x26e620: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x26E620u;
    SET_GPR_U32(ctx, 31, 0x26E628u);
    ctx->pc = 0x26E624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E620u;
    // 0x26e624: 0x26111660  addiu       $s1, $s0, 0x1660 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x26E620u, 0x26E628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E628u;
label_26e628:
    // 0x26e628: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x26e628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x26e62c: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x26E62Cu;
    SET_GPR_U32(ctx, 31, 0x26E634u);
    ctx->pc = 0x26E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E62Cu;
    // 0x26e630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x26E62Cu, 0x26E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E634u;
label_26e634:
    // 0x26e634: 0xc60116c8  lwc1        $f1, 0x16C8($s0)
    ctx->pc = 0x26e634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e638: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x26e638u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26e63c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26e63cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e640: 0x0  nop
    ctx->pc = 0x26e640u;
    // NOP
    // 0x26e644: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x26E644u;
    {
        const bool branch_taken_0x26e644 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E644u;
        // 0x26e648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e644) {
            ctx->pc = 0x26E69Cu;
            goto label_26e69c;
        }
    }
    ctx->pc = 0x26E64Cu;
    // 0x26e64c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x26e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x26e650: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x26e650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x26e654: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x26e654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x26e658: 0x3c0143e1  lui         $at, 0x43E1
    ctx->pc = 0x26e658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17377 << 16));
    // 0x26e65c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26e65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26e660: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26e660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26e664: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26e664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e668: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x26e668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x26e66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e670: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x26e670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26e674: 0xc09ba62  jal         func_26E988
    ctx->pc = 0x26E674u;
    SET_GPR_U32(ctx, 31, 0x26E67Cu);
    ctx->pc = 0x26E678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E674u;
    // 0x26e678: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E988u, 0x26E674u, 0x26E67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E67Cu;
label_26e67c:
    // 0x26e67c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x26e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x26e680: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x26e680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e684: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x26e684u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e68c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x26e68cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e690: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26E690u;
    {
        const bool branch_taken_0x26e690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E690u;
        // 0x26e694: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e690) {
            ctx->pc = 0x26E69Cu;
            goto label_26e69c;
        }
    }
    ctx->pc = 0x26E698u;
label_26e698:
    // 0x26e698: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26e698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e69c:
    // 0x26e69c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26e69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e6a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26e6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e6a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26e6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x26E6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6A8u;
        // 0x26e6ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E6B0u;
}
