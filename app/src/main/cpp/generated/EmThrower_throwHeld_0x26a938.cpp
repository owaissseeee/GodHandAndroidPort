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

// Function: EmThrower_throwHeld
// Address: 0x26a938 - 0x26aa30
void EmThrower_throwHeld_0x26a938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EmThrower_throwHeld_0x26a938");
#endif

    switch (ctx->pc) {
        case 0x26a990u: goto label_26a990;
        case 0x26a998u: goto label_26a998;
        case 0x26a9bcu: goto label_26a9bc;
        case 0x26a9dcu: goto label_26a9dc;
        case 0x26a9f0u: goto label_26a9f0;
        case 0x26aa08u: goto label_26aa08;
        default: break;
    }

    ctx->pc = 0x26a938u;

    // 0x26a938: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26a938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26a93c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x26a93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x26a940: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26a940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26a944: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26a944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a948: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x26a948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x26a94c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x26a94cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a950: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26a950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26a954: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x26a954u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x26a958: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x26a958u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26a95c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x26a95cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26a960: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x26a960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26a964: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x26a964u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x26a968: 0x262206e4  addiu       $v0, $s1, 0x6E4
    ctx->pc = 0x26a968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1764));
    // 0x26a96c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x26a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26a970: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26a970u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a974: 0x52000025  beql        $s0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x26A974u;
    {
        const bool branch_taken_0x26a974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a974) {
            ctx->pc = 0x26A978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A974u;
            // 0x26a978: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AA0Cu;
            goto label_26aa0c;
        }
    }
    ctx->pc = 0x26A97Cu;
    // 0x26a97c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x26a97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x26a980: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26a980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x26a984: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26a984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x26a988: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x26A988u;
    SET_GPR_U32(ctx, 31, 0x26A990u);
    ctx->pc = 0x26A98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A988u;
    // 0x26a98c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26A988u, 0x26A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A990u;
label_26a990:
    // 0x26a990: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x26A990u;
    SET_GPR_U32(ctx, 31, 0x26A998u);
    ctx->pc = 0x26A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A990u;
    // 0x26a994: 0x46150582  mul.s       $f22, $f0, $f21 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26A990u, 0x26A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A998u;
label_26a998:
    // 0x26a998: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26a998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x26a99c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26a99cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x26a9a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26a9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a9a4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26a9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x26a9a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26a9a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x26a9ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26a9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a9b0: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x26a9b0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a9b4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x26A9B4u;
    SET_GPR_U32(ctx, 31, 0x26A9BCu);
    ctx->pc = 0x26A9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A9B4u;
    // 0x26a9b8: 0x4602a500  add.s       $f20, $f20, $f2 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26A9B4u, 0x26A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9BCu;
label_26a9bc:
    // 0x26a9bc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x26a9bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x26a9c0: 0xe7b60000  swc1        $f22, 0x0($sp)
    ctx->pc = 0x26a9c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26a9c4: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x26a9c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26a9c8: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x26a9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x26a9cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26a9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a9d0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26a9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a9d4: 0xc07e0d4  jal         func_1F8350
    ctx->pc = 0x26A9D4u;
    SET_GPR_U32(ctx, 31, 0x26A9DCu);
    ctx->pc = 0x26A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A9D4u;
    // 0x26a9d8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8350u, 0x26A9D4u, 0x26A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9DCu;
label_26a9dc:
    // 0x26a9dc: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A9DCu;
    {
        const bool branch_taken_0x26a9dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9DCu;
        // 0x26a9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9dc) {
            ctx->pc = 0x26A9F8u;
            goto label_26a9f8;
        }
    }
    ctx->pc = 0x26A9E4u;
    // 0x26a9e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26a9e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26a9e8: 0xc06c5d8  jal         func_1B1760
    ctx->pc = 0x26A9E8u;
    SET_GPR_U32(ctx, 31, 0x26A9F0u);
    ctx->pc = 0x26A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A9E8u;
    // 0x26a9ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1760u, 0x26A9E8u, 0x26A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9F0u;
label_26a9f0:
    // 0x26a9f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26A9F0u;
    {
        const bool branch_taken_0x26a9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9F0u;
        // 0x26a9f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9f0) {
            ctx->pc = 0x26AA0Cu;
            goto label_26aa0c;
        }
    }
    ctx->pc = 0x26A9F8u;
label_26a9f8:
    // 0x26a9f8: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x26a9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x26a9fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26a9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26aa00: 0xc06c5d8  jal         func_1B1760
    ctx->pc = 0x26AA00u;
    SET_GPR_U32(ctx, 31, 0x26AA08u);
    ctx->pc = 0x26AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AA00u;
    // 0x26aa04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1760u, 0x26AA00u, 0x26AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA08u;
label_26aa08:
    // 0x26aa08: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x26aa08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26aa0c:
    // 0x26aa0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x26aa0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26aa10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26aa10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26aa14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26aa14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26aa18: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x26aa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26aa1c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x26aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26aa20: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x26aa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26aa24: 0x3e00008  jr          $ra
    ctx->pc = 0x26AA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA24u;
        // 0x26aa28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26AA2Cu;
    // 0x26aa2c: 0x0  nop
    ctx->pc = 0x26aa2cu;
    // NOP
    ctx->pc = 0x26aa30u;
}
