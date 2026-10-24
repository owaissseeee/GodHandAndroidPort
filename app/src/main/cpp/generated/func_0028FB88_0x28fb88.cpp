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

// Function: func_0028FB88
// Address: 0x28fb88 - 0x28fdd0
void func_0028FB88_0x28fb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028FB88_0x28fb88");
#endif

    switch (ctx->pc) {
        case 0x28fbc0u: goto label_28fbc0;
        case 0x28fc98u: goto label_28fc98;
        default: break;
    }

    ctx->pc = 0x28fb88u;

    // 0x28fb88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28fb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28fb8c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x28fb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x28fb90: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x28fb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x28fb94: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x28fb94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28fb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x28fb9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28fb9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fba0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x28fba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x28fba4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28fba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fba8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x28fba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x28fbac: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x28fbacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fbb0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x28fbb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x28fbb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28fbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28fbb8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x28FBB8u;
    SET_GPR_U32(ctx, 31, 0x28FBC0u);
    ctx->pc = 0x28FBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBB8u;
    // 0x28fbbc: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x28FBB8u, 0x28FBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FBC0u;
label_28fbc0:
    // 0x28fbc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28fbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28fbc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28fbc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28fbc8: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x28FBC8u;
    {
        const bool branch_taken_0x28fbc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FBC8u;
        // 0x28fbcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fbc8) {
            ctx->pc = 0x28FC7Cu;
            goto label_28fc7c;
        }
    }
    ctx->pc = 0x28FBD0u;
    // 0x28fbd0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x28fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x28fbd4: 0x90437a51  lbu         $v1, 0x7A51($v0)
    ctx->pc = 0x28fbd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x747A51u));
    // 0x28fbd8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28fbdc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x28fbdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x28fbe0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x28FBE0u;
    {
        const bool branch_taken_0x28fbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FBE0u;
        // 0x28fbe4: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fbe0) {
            ctx->pc = 0x28FC7Cu;
            goto label_28fc7c;
        }
    }
    ctx->pc = 0x28FBE8u;
    // 0x28fbe8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28fbec: 0x2442a640  addiu       $v0, $v0, -0x59C0
    ctx->pc = 0x28fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944320));
    // 0x28fbf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fbf4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28fbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28fbf8: 0x800008  jr          $a0
    ctx->pc = 0x28FBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28FC00u: goto label_28fc00;
            case 0x28FC14u: goto label_28fc14;
            case 0x28FC28u: goto label_28fc28;
            case 0x28FC30u: goto label_28fc30;
            case 0x28FC44u: goto label_28fc44;
            case 0x28FC58u: goto label_28fc58;
            case 0x28FC68u: goto label_28fc68;
            case 0x28FC7Cu: goto label_28fc7c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FBF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28FC00u;
label_28fc00:
    // 0x28fc00: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x28fc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x28fc04: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x28fc04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x28fc08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28fc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fc0c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x28FC0Cu;
    {
        const bool branch_taken_0x28fc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC0Cu;
        // 0x28fc10: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc0c) {
            ctx->pc = 0x28FC7Cu;
            goto label_28fc7c;
        }
    }
    ctx->pc = 0x28FC14u;
label_28fc14:
    // 0x28fc14: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x28fc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x28fc18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28fc18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28fc1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28fc1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fc20: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x28FC20u;
    {
        const bool branch_taken_0x28fc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC20u;
        // 0x28fc24: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc20) {
            ctx->pc = 0x28FC7Cu;
            goto label_28fc7c;
        }
    }
    ctx->pc = 0x28FC28u;
label_28fc28:
    // 0x28fc28: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28FC28u;
    {
        const bool branch_taken_0x28fc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC28u;
        // 0x28fc2c: 0x4614a500  add.s       $f20, $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc28) {
            ctx->pc = 0x28FC7Cu;
            goto label_28fc7c;
        }
    }
    ctx->pc = 0x28FC30u;
label_28fc30:
    // 0x28fc30: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x28fc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
    // 0x28fc34: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28fc34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x28fc38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28fc38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fc3c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28FC3Cu;
    {
        const bool branch_taken_0x28fc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC3Cu;
        // 0x28fc40: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc3c) {
            ctx->pc = 0x28FC7Cu;
            goto label_28fc7c;
        }
    }
    ctx->pc = 0x28FC44u;
label_28fc44:
    // 0x28fc44: 0x3c014026  lui         $at, 0x4026
    ctx->pc = 0x28fc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16422 << 16));
    // 0x28fc48: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x28fc48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x28fc4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28fc4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fc50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28FC50u;
    {
        const bool branch_taken_0x28fc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC50u;
        // 0x28fc54: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc50) {
            ctx->pc = 0x28FC7Cu;
            goto label_28fc7c;
        }
    }
    ctx->pc = 0x28FC58u;
label_28fc58:
    // 0x28fc58: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x28fc58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x28fc5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28fc5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fc60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28FC60u;
    {
        const bool branch_taken_0x28fc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC60u;
        // 0x28fc64: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc60) {
            ctx->pc = 0x28FC7Cu;
            goto label_28fc7c;
        }
    }
    ctx->pc = 0x28FC68u;
label_28fc68:
    // 0x28fc68: 0x3c014053  lui         $at, 0x4053
    ctx->pc = 0x28fc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16467 << 16));
    // 0x28fc6c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x28fc6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x28fc70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28fc70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fc74: 0x0  nop
    ctx->pc = 0x28fc74u;
    // NOP
    // 0x28fc78: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x28fc78u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_28fc7c:
    // 0x28fc7c: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x28FC7Cu;
    {
        const bool branch_taken_0x28fc7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC7Cu;
        // 0x28fc80: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc7c) {
            ctx->pc = 0x28FCF0u;
            goto label_28fcf0;
        }
    }
    ctx->pc = 0x28FC84u;
    // 0x28fc84: 0x964302fe  lhu         $v1, 0x2FE($s2)
    ctx->pc = 0x28fc84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
    // 0x28fc88: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28FC88u;
    {
        const bool branch_taken_0x28fc88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28fc88) {
            ctx->pc = 0x28FCF0u;
            goto label_28fcf0;
        }
    }
    ctx->pc = 0x28FC90u;
    // 0x28fc90: 0xc04b1d2  jal         func_12C748
    ctx->pc = 0x28FC90u;
    SET_GPR_U32(ctx, 31, 0x28FC98u);
    ctx->pc = 0x28FC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC90u;
    // 0x28fc94: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C748u, 0x28FC90u, 0x28FC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC98u;
label_28fc98:
    // 0x28fc98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FC98u;
    {
        const bool branch_taken_0x28fc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fc98) {
            ctx->pc = 0x28FCB0u;
            goto label_28fcb0;
        }
    }
    ctx->pc = 0x28FCA0u;
    // 0x28fca0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x28fca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x28fca4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28fca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fca8: 0x0  nop
    ctx->pc = 0x28fca8u;
    // NOP
    // 0x28fcac: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x28fcacu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_28fcb0:
    // 0x28fcb0: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x28FCB0u;
    {
        const bool branch_taken_0x28fcb0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCB0u;
        // 0x28fcb4: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fcb0) {
            ctx->pc = 0x28FCF0u;
            goto label_28fcf0;
        }
    }
    ctx->pc = 0x28FCB8u;
    // 0x28fcb8: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x28fcb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x28fcbc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x28FCBCu;
    {
        const bool branch_taken_0x28fcbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fcbc) {
            ctx->pc = 0x28FCF0u;
            goto label_28fcf0;
        }
    }
    ctx->pc = 0x28FCC4u;
    // 0x28fcc4: 0x92230622  lbu         $v1, 0x622($s1)
    ctx->pc = 0x28fcc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1570)));
    // 0x28fcc8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FCC8u;
    {
        const bool branch_taken_0x28fcc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCC8u;
        // 0x28fccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fcc8) {
            ctx->pc = 0x28FCD8u;
            goto label_28fcd8;
        }
    }
    ctx->pc = 0x28FCD0u;
    // 0x28fcd0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FCD0u;
    {
        const bool branch_taken_0x28fcd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28fcd0) {
            ctx->pc = 0x28FCE0u;
            goto label_28fce0;
        }
    }
    ctx->pc = 0x28FCD8u;
label_28fcd8:
    // 0x28fcd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28FCD8u;
    {
        const bool branch_taken_0x28fcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCD8u;
        // 0x28fcdc: 0x4614a500  add.s       $f20, $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fcd8) {
            ctx->pc = 0x28FCF0u;
            goto label_28fcf0;
        }
    }
    ctx->pc = 0x28FCE0u;
label_28fce0:
    // 0x28fce0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x28fce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x28fce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28fce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fce8: 0x0  nop
    ctx->pc = 0x28fce8u;
    // NOP
    // 0x28fcec: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x28fcecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_28fcf0:
    // 0x28fcf0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x28fcf0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fcf4: 0x0  nop
    ctx->pc = 0x28fcf4u;
    // NOP
    // 0x28fcf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28fcf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28fcfc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28fcfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28fd00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28fd00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fd04: 0x9623054a  lhu         $v1, 0x54A($s1)
    ctx->pc = 0x28fd04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x28fd08: 0x24047d00  addiu       $a0, $zero, 0x7D00
    ctx->pc = 0x28fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
    // 0x28fd0c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x28fd0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x28fd10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28fd10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28fd14: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fd14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x28fd18: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x28fd18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x28fd1c: 0x28a27d01  slti        $v0, $a1, 0x7D01
    ctx->pc = 0x28fd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32001) ? 1 : 0);
    // 0x28fd20: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x28fd20u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x28fd24: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x28fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28fd28: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x28fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28fd2c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28FD2Cu;
    {
        const bool branch_taken_0x28fd2c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x28FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD2Cu;
        // 0x28fd30: 0xa623054a  sh          $v1, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd2c) {
            ctx->pc = 0x28FD38u;
            goto label_28fd38;
        }
    }
    ctx->pc = 0x28FD34u;
    // 0x28fd34: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x28fd34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
label_28fd38:
    // 0x28fd38: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x28fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x28fd3c: 0x2402021f  addiu       $v0, $zero, 0x21F
    ctx->pc = 0x28fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
    // 0x28fd40: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28FD40u;
    {
        const bool branch_taken_0x28fd40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD40u;
        // 0x28fd44: 0x2402023b  addiu       $v0, $zero, 0x23B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 571));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd40) {
            ctx->pc = 0x28FD98u;
            goto label_28fd98;
        }
    }
    ctx->pc = 0x28FD48u;
    // 0x28fd48: 0x92220615  lbu         $v0, 0x615($s1)
    ctx->pc = 0x28fd48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1557)));
    // 0x28fd4c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28FD4Cu;
    {
        const bool branch_taken_0x28fd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD4Cu;
        // 0x28fd50: 0x2402023b  addiu       $v0, $zero, 0x23B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 571));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd4c) {
            ctx->pc = 0x28FD98u;
            goto label_28fd98;
        }
    }
    ctx->pc = 0x28FD54u;
    // 0x28fd54: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x28fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x28fd58: 0x8c466a80  lw          $a2, 0x6A80($v0)
    ctx->pc = 0x28fd58u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x586A80u));
    // 0x28fd5c: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x28FD5Cu;
    {
        const bool branch_taken_0x28fd5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD5Cu;
        // 0x28fd60: 0x517c2  srl         $v0, $a1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd5c) {
            ctx->pc = 0x28FD94u;
            goto label_28fd94;
        }
    }
    ctx->pc = 0x28FD64u;
    // 0x28fd64: 0x94c4054a  lhu         $a0, 0x54A($a2)
    ctx->pc = 0x28fd64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 1354)));
    // 0x28fd68: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x28fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28fd6c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x28fd6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x28fd70: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x28fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28fd74: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x28fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x28fd78: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x28fd78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x28fd7c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x28fd7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28fd80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FD80u;
    {
        const bool branch_taken_0x28fd80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD80u;
        // 0x28fd84: 0xa4c4054a  sh          $a0, 0x54A($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd80) {
            ctx->pc = 0x28FD90u;
            goto label_28fd90;
        }
    }
    ctx->pc = 0x28FD88u;
    // 0x28fd88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fd8c: 0xa4c2054a  sh          $v0, 0x54A($a2)
    ctx->pc = 0x28fd8cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1354), (uint16_t)GPR_U32(ctx, 2));
label_28fd90:
    // 0x28fd90: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x28fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_28fd94:
    // 0x28fd94: 0x2402023b  addiu       $v0, $zero, 0x23B
    ctx->pc = 0x28fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 571));
label_28fd98:
    // 0x28fd98: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FD98u;
    {
        const bool branch_taken_0x28fd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28fd98) {
            ctx->pc = 0x28FD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FD98u;
            // 0x28fd9c: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FDACu;
            goto label_28fdac;
        }
    }
    ctx->pc = 0x28FDA0u;
    // 0x28fda0: 0x96220548  lhu         $v0, 0x548($s1)
    ctx->pc = 0x28fda0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x28fda4: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x28fda4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x28fda8: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x28fda8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_28fdac:
    // 0x28fdac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x28fdacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28fdb0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x28fdb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28fdb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28fdb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28fdb8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x28fdb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28fdbc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x28fdbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fdc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28fdc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fdc4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x28fdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28fdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x28FDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDC8u;
        // 0x28fdcc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FDD0u;
}
