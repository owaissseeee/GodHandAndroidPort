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

// Function: func_002B0BE0
// Address: 0x2b0be0 - 0x2b0d68
void func_002B0BE0_0x2b0be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B0BE0_0x2b0be0");
#endif

    switch (ctx->pc) {
        case 0x2b0c6cu: goto label_2b0c6c;
        case 0x2b0c7cu: goto label_2b0c7c;
        case 0x2b0c8cu: goto label_2b0c8c;
        case 0x2b0c9cu: goto label_2b0c9c;
        case 0x2b0cb8u: goto label_2b0cb8;
        case 0x2b0cc8u: goto label_2b0cc8;
        case 0x2b0cf8u: goto label_2b0cf8;
        default: break;
    }

    ctx->pc = 0x2b0be0u;

    // 0x2b0be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b0be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b0be4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b0be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b0be8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b0be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b0bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b0becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0bf0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b0bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b0bf4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b0bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0bfc: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2b0bfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b0c00: 0x313c2  srl         $v0, $v1, 15
    ctx->pc = 0x2b0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x2b0c04: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2B0C04u;
    {
        const bool branch_taken_0x2b0c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C04u;
        // 0x2b0c08: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c04) {
            ctx->pc = 0x2B0CB0u;
            goto label_2b0cb0;
        }
    }
    ctx->pc = 0x2B0C0Cu;
    // 0x2b0c0c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b0c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b0c10: 0x34029400  ori         $v0, $zero, 0x9400
    ctx->pc = 0x2b0c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    // 0x2b0c14: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B0C14u;
    {
        const bool branch_taken_0x2b0c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C14u;
        // 0x2b0c18: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c14) {
            ctx->pc = 0x2B0C84u;
            goto label_2b0c84;
        }
    }
    ctx->pc = 0x2B0C1Cu;
    // 0x2b0c1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0C1Cu;
    {
        const bool branch_taken_0x2b0c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C1Cu;
        // 0x2b0c20: 0x3402a800  ori         $v0, $zero, 0xA800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c1c) {
            ctx->pc = 0x2B0C38u;
            goto label_2b0c38;
        }
    }
    ctx->pc = 0x2B0C24u;
    // 0x2b0c24: 0x34029300  ori         $v0, $zero, 0x9300
    ctx->pc = 0x2b0c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37632);
    // 0x2b0c28: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B0C28u;
    {
        const bool branch_taken_0x2b0c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C28u;
        // 0x2b0c2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c28) {
            ctx->pc = 0x2B0C64u;
            goto label_2b0c64;
        }
    }
    ctx->pc = 0x2B0C30u;
    // 0x2b0c30: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2B0C30u;
    {
        const bool branch_taken_0x2b0c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0c30) {
            ctx->pc = 0x2B0CA4u;
            goto label_2b0ca4;
        }
    }
    ctx->pc = 0x2B0C38u;
label_2b0c38:
    // 0x2b0c38: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B0C38u;
    {
        const bool branch_taken_0x2b0c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0c38) {
            ctx->pc = 0x2B0CA4u;
            goto label_2b0ca4;
        }
    }
    ctx->pc = 0x2B0C40u;
    // 0x2b0c40: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2b0c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0c44: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x2b0c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0c48: 0xc6030048  lwc1        $f3, 0x48($s0)
    ctx->pc = 0x2b0c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0c4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b0c50: 0x3c0141d0  lui         $at, 0x41D0
    ctx->pc = 0x2b0c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16848 << 16));
    // 0x2b0c54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b0c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0c58: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b0c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b0c5c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2B0C5Cu;
    {
        const bool branch_taken_0x2b0c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C5Cu;
        // 0x2b0c60: 0x46020082  mul.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c5c) {
            ctx->pc = 0x2B0D48u;
            goto label_2b0d48;
        }
    }
    ctx->pc = 0x2B0C64u;
label_2b0c64:
    // 0x2b0c64: 0xc0ac49c  jal         func_2B1270
    ctx->pc = 0x2B0C64u;
    SET_GPR_U32(ctx, 31, 0x2B0C6Cu);
    ctx->pc = 0x2B0C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0C64u;
    // 0x2b0c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1270u, 0x2B0C64u, 0x2B0C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C6Cu;
label_2b0c6c:
    // 0x2b0c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0c70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b0c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0c74: 0xc0ac3c8  jal         func_2B0F20
    ctx->pc = 0x2B0C74u;
    SET_GPR_U32(ctx, 31, 0x2B0C7Cu);
    ctx->pc = 0x2B0C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0C74u;
    // 0x2b0c78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0F20u, 0x2B0C74u, 0x2B0C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C7Cu;
label_2b0c7c:
    // 0x2b0c7c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2B0C7Cu;
    {
        const bool branch_taken_0x2b0c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C7Cu;
        // 0x2b0c80: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c7c) {
            ctx->pc = 0x2B0D48u;
            goto label_2b0d48;
        }
    }
    ctx->pc = 0x2B0C84u;
label_2b0c84:
    // 0x2b0c84: 0xc0ac4a4  jal         func_2B1290
    ctx->pc = 0x2B0C84u;
    SET_GPR_U32(ctx, 31, 0x2B0C8Cu);
    ctx->pc = 0x2B0C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0C84u;
    // 0x2b0c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1290u, 0x2B0C84u, 0x2B0C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C8Cu;
label_2b0c8c:
    // 0x2b0c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0c90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b0c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0c94: 0xc0ac45a  jal         func_2B1168
    ctx->pc = 0x2B0C94u;
    SET_GPR_U32(ctx, 31, 0x2B0C9Cu);
    ctx->pc = 0x2B0C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0C94u;
    // 0x2b0c98: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1168u, 0x2B0C94u, 0x2B0C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0C9Cu;
label_2b0c9c:
    // 0x2b0c9c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2B0C9Cu;
    {
        const bool branch_taken_0x2b0c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C9Cu;
        // 0x2b0ca0: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c9c) {
            ctx->pc = 0x2B0D48u;
            goto label_2b0d48;
        }
    }
    ctx->pc = 0x2B0CA4u;
label_2b0ca4:
    // 0x2b0ca4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2b0ca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0ca8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2B0CA8u;
    {
        const bool branch_taken_0x2b0ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CA8u;
        // 0x2b0cac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ca8) {
            ctx->pc = 0x2B0D4Cu;
            goto label_2b0d4c;
        }
    }
    ctx->pc = 0x2B0CB0u;
label_2b0cb0:
    // 0x2b0cb0: 0xc0ac4a8  jal         func_2B12A0
    ctx->pc = 0x2B0CB0u;
    SET_GPR_U32(ctx, 31, 0x2B0CB8u);
    ctx->pc = 0x2B0CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0CB0u;
    // 0x2b0cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B12A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B12A0u, 0x2B0CB0u, 0x2B0CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0CB8u;
label_2b0cb8:
    // 0x2b0cb8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B0CB8u;
    {
        const bool branch_taken_0x2b0cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CB8u;
        // 0x2b0cbc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0cb8) {
            ctx->pc = 0x2B0CECu;
            goto label_2b0cec;
        }
    }
    ctx->pc = 0x2B0CC0u;
    // 0x2b0cc0: 0xc0ac4b6  jal         func_2B12D8
    ctx->pc = 0x2B0CC0u;
    SET_GPR_U32(ctx, 31, 0x2B0CC8u);
    ctx->pc = 0x2B12D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B12D8u, 0x2B0CC0u, 0x2B0CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0CC8u;
label_2b0cc8:
    // 0x2b0cc8: 0xc6020040  lwc1        $f2, 0x40($s0)
    ctx->pc = 0x2b0cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b0ccc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2b0cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0cd0: 0xc6030048  lwc1        $f3, 0x48($s0)
    ctx->pc = 0x2b0cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0cd4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b0cd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b0cd8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b0cdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b0cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b0ce0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2b0ce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2b0ce4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B0CE4u;
    {
        const bool branch_taken_0x2b0ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CE4u;
        // 0x2b0ce8: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ce4) {
            ctx->pc = 0x2B0D24u;
            goto label_2b0d24;
        }
    }
    ctx->pc = 0x2B0CECu;
label_2b0cec:
    // 0x2b0cec: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x2b0cecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b0cf0: 0xc0a92e8  jal         func_2A4BA0
    ctx->pc = 0x2B0CF0u;
    SET_GPR_U32(ctx, 31, 0x2B0CF8u);
    ctx->pc = 0x2B0CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0CF0u;
    // 0x2b0cf4: 0x8c442380  lw          $a0, 0x2380($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4BA0u, 0x2B0CF0u, 0x2B0CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0CF8u;
label_2b0cf8:
    // 0x2b0cf8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2b0cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0cfc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b0cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0d00: 0x0  nop
    ctx->pc = 0x2b0d00u;
    // NOP
    // 0x2b0d04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b0d04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b0d08: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x2b0d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0d0c: 0xc6030048  lwc1        $f3, 0x48($s0)
    ctx->pc = 0x2b0d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0d10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b0d14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b0d18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b0d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b0d1c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b0d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b0d20: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b0d20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2b0d24:
    // 0x2b0d24: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B0D24u;
    {
        const bool branch_taken_0x2b0d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0d24) {
            ctx->pc = 0x2B0D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0D24u;
            // 0x2b0d28: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0D4Cu;
            goto label_2b0d4c;
        }
    }
    ctx->pc = 0x2B0D2Cu;
    // 0x2b0d2c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2b0d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0d30: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x2b0d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x2b0d34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b0d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0d38: 0x0  nop
    ctx->pc = 0x2b0d38u;
    // NOP
    // 0x2b0d3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0d3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b0d40: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b0d40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b0d44: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b0d44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2b0d48:
    // 0x2b0d48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b0d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b0d4c:
    // 0x2b0d4c: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x2b0d4cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x2b0d50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b0d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0d54: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b0d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D5Cu;
        // 0x2b0d60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0D64u;
    // 0x2b0d64: 0x0  nop
    ctx->pc = 0x2b0d64u;
    // NOP
    ctx->pc = 0x2b0d68u;
}
