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

// Function: func_0026BBD0
// Address: 0x26bbd0 - 0x26bdd0
void func_0026BBD0_0x26bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026BBD0_0x26bbd0");
#endif

    switch (ctx->pc) {
        case 0x26bd28u: goto label_26bd28;
        case 0x26bd7cu: goto label_26bd7c;
        case 0x26bda4u: goto label_26bda4;
        case 0x26bdb4u: goto label_26bdb4;
        default: break;
    }

    ctx->pc = 0x26bbd0u;

    // 0x26bbd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26bbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x26bbd4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x26bbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x26bbd8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x26bbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x26bbdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26bbdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bbe0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x26bbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x26bbe4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26bbe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bbe8: 0x12400072  beqz        $s2, . + 4 + (0x72 << 2)
    ctx->pc = 0x26BBE8u;
    {
        const bool branch_taken_0x26bbe8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBE8u;
        // 0x26bbec: 0xffbf0070  sd          $ra, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbe8) {
            ctx->pc = 0x26BDB4u;
            goto label_26bdb4;
        }
    }
    ctx->pc = 0x26BBF0u;
    // 0x26bbf0: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x26bbf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x26bbf4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x26bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26bbf8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26bbf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26bbfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BBFCu;
    {
        const bool branch_taken_0x26bbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBFCu;
        // 0x26bc00: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbfc) {
            ctx->pc = 0x26BC10u;
            goto label_26bc10;
        }
    }
    ctx->pc = 0x26BC04u;
    // 0x26bc04: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x26bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x26bc08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26BC08u;
    {
        const bool branch_taken_0x26bc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC08u;
        // 0x26bc0c: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc08) {
            ctx->pc = 0x26BC14u;
            goto label_26bc14;
        }
    }
    ctx->pc = 0x26BC10u;
label_26bc10:
    // 0x26bc10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26bc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bc14:
    // 0x26bc14: 0x10a00068  beqz        $a1, . + 4 + (0x68 << 2)
    ctx->pc = 0x26BC14u;
    {
        const bool branch_taken_0x26bc14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC14u;
        // 0x26bc18: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc14) {
            ctx->pc = 0x26BDB8u;
            goto label_26bdb8;
        }
    }
    ctx->pc = 0x26BC1Cu;
    // 0x26bc1c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x26bc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26bc20: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x26bc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26bc24: 0x82231869  lb          $v1, 0x1869($s1)
    ctx->pc = 0x26bc24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6249)));
    // 0x26bc28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bc2c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26BC2Cu;
    {
        const bool branch_taken_0x26bc2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC2Cu;
        // 0x26bc30: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc2c) {
            ctx->pc = 0x26BC78u;
            goto label_26bc78;
        }
    }
    ctx->pc = 0x26BC34u;
    // 0x26bc34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BC34u;
    {
        const bool branch_taken_0x26bc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC34u;
        // 0x26bc38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc34) {
            ctx->pc = 0x26BC4Cu;
            goto label_26bc4c;
        }
    }
    ctx->pc = 0x26BC3Cu;
    // 0x26bc3c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x26BC3Cu;
    {
        const bool branch_taken_0x26bc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC3Cu;
        // 0x26bc40: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc3c) {
            ctx->pc = 0x26BCA4u;
            goto label_26bca4;
        }
    }
    ctx->pc = 0x26BC44u;
    // 0x26bc44: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26BC44u;
    {
        const bool branch_taken_0x26bc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26bc44) {
            ctx->pc = 0x26BCD0u;
            goto label_26bcd0;
        }
    }
    ctx->pc = 0x26BC4Cu;
label_26bc4c:
    // 0x26bc4c: 0x3c01bee1  lui         $at, 0xBEE1
    ctx->pc = 0x26bc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48865 << 16));
    // 0x26bc50: 0x3421a36e  ori         $at, $at, 0xA36E
    ctx->pc = 0x26bc50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41838);
    // 0x26bc54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26bc54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bc58: 0x3c013df7  lui         $at, 0x3DF7
    ctx->pc = 0x26bc58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15863 << 16));
    // 0x26bc5c: 0x34219a6b  ori         $at, $at, 0x9A6B
    ctx->pc = 0x26bc5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39531);
    // 0x26bc60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26bc60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26bc64: 0x3c013df6  lui         $at, 0x3DF6
    ctx->pc = 0x26bc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15862 << 16));
    // 0x26bc68: 0x34212b6b  ori         $at, $at, 0x2B6B
    ctx->pc = 0x26bc68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11115);
    // 0x26bc6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26bc6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26bc70: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x26BC70u;
    {
        const bool branch_taken_0x26bc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC70u;
        // 0x26bc74: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc70) {
            ctx->pc = 0x26BCF8u;
            goto label_26bcf8;
        }
    }
    ctx->pc = 0x26BC78u;
label_26bc78:
    // 0x26bc78: 0x3c01bee1  lui         $at, 0xBEE1
    ctx->pc = 0x26bc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48865 << 16));
    // 0x26bc7c: 0x3421a36e  ori         $at, $at, 0xA36E
    ctx->pc = 0x26bc7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41838);
    // 0x26bc80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26bc80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bc84: 0x3c01bdf6  lui         $at, 0xBDF6
    ctx->pc = 0x26bc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48630 << 16));
    // 0x26bc88: 0x3421c8b4  ori         $at, $at, 0xC8B4
    ctx->pc = 0x26bc88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51380);
    // 0x26bc8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26bc8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26bc90: 0x3c013df7  lui         $at, 0x3DF7
    ctx->pc = 0x26bc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15863 << 16));
    // 0x26bc94: 0x34219a6b  ori         $at, $at, 0x9A6B
    ctx->pc = 0x26bc94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39531);
    // 0x26bc98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26bc98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26bc9c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x26BC9Cu;
    {
        const bool branch_taken_0x26bc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC9Cu;
        // 0x26bca0: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc9c) {
            ctx->pc = 0x26BCF8u;
            goto label_26bcf8;
        }
    }
    ctx->pc = 0x26BCA4u;
label_26bca4:
    // 0x26bca4: 0x3c01bee1  lui         $at, 0xBEE1
    ctx->pc = 0x26bca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48865 << 16));
    // 0x26bca8: 0x3421a36e  ori         $at, $at, 0xA36E
    ctx->pc = 0x26bca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41838);
    // 0x26bcac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26bcacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bcb0: 0x3c01bdf7  lui         $at, 0xBDF7
    ctx->pc = 0x26bcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48631 << 16));
    // 0x26bcb4: 0x3421ced9  ori         $at, $at, 0xCED9
    ctx->pc = 0x26bcb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52953);
    // 0x26bcb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26bcb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26bcbc: 0x3c01bdf5  lui         $at, 0xBDF5
    ctx->pc = 0x26bcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48629 << 16));
    // 0x26bcc0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x26bcc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x26bcc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26bcc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26bcc8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26BCC8u;
    {
        const bool branch_taken_0x26bcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCC8u;
        // 0x26bccc: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bcc8) {
            ctx->pc = 0x26BCF8u;
            goto label_26bcf8;
        }
    }
    ctx->pc = 0x26BCD0u;
label_26bcd0:
    // 0x26bcd0: 0x3c01bee1  lui         $at, 0xBEE1
    ctx->pc = 0x26bcd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48865 << 16));
    // 0x26bcd4: 0x3421a36e  ori         $at, $at, 0xA36E
    ctx->pc = 0x26bcd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41838);
    // 0x26bcd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26bcd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bcdc: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x26bcdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x26bce0: 0x3421f6fd  ori         $at, $at, 0xF6FD
    ctx->pc = 0x26bce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63229);
    // 0x26bce4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26bce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26bce8: 0x3c01bdf7  lui         $at, 0xBDF7
    ctx->pc = 0x26bce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48631 << 16));
    // 0x26bcec: 0x3421ced9  ori         $at, $at, 0xCED9
    ctx->pc = 0x26bcecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52953);
    // 0x26bcf0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26bcf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26bcf4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x26bcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_26bcf8:
    // 0x26bcf8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x26bcf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26bcfc: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x26bcfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26bd00: 0x92221869  lbu         $v0, 0x1869($s1)
    ctx->pc = 0x26bd00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6249)));
    // 0x26bd04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26bd08: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x26bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x26bd0c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26BD0Cu;
    {
        const bool branch_taken_0x26bd0c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x26BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD0Cu;
        // 0x26bd10: 0xa2221869  sb          $v0, 0x1869($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6249), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd0c) {
            ctx->pc = 0x26BD18u;
            goto label_26bd18;
        }
    }
    ctx->pc = 0x26BD14u;
    // 0x26bd14: 0xa2201869  sb          $zero, 0x1869($s1)
    ctx->pc = 0x26bd14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6249), (uint8_t)GPR_U32(ctx, 0));
label_26bd18:
    // 0x26bd18: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26bd1c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x26bd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x26bd20: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x26BD20u;
    SET_GPR_U32(ctx, 31, 0x26BD28u);
    ctx->pc = 0x26BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD20u;
    // 0x26bd24: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26BD20u, 0x26BD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD28u;
label_26bd28:
    // 0x26bd28: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x26bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x26bd2c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x26bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26bd30: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BD30u;
    {
        const bool branch_taken_0x26bd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD30u;
        // 0x26bd34: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd30) {
            ctx->pc = 0x26BD4Cu;
            goto label_26bd4c;
        }
    }
    ctx->pc = 0x26BD38u;
    // 0x26bd38: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x26bd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x26bd3c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x26bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bd40: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x26bd40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x26bd44: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x26bd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bd48: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x26bd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_26bd4c:
    // 0x26bd4c: 0x26420490  addiu       $v0, $s2, 0x490
    ctx->pc = 0x26bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x26bd50: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BD50u;
    {
        const bool branch_taken_0x26bd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD50u;
        // 0x26bd54: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd50) {
            ctx->pc = 0x26BD6Cu;
            goto label_26bd6c;
        }
    }
    ctx->pc = 0x26BD58u;
    // 0x26bd58: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x26bd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bd5c: 0xe6400490  swc1        $f0, 0x490($s2)
    ctx->pc = 0x26bd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
    // 0x26bd60: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x26bd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x26bd64: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x26bd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bd68: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x26bd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_26bd6c:
    // 0x26bd6c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x26bd6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26bd70: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x26bd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26bd74: 0xc051e62  jal         func_147988
    ctx->pc = 0x26BD74u;
    SET_GPR_U32(ctx, 31, 0x26BD7Cu);
    ctx->pc = 0x26BD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD74u;
    // 0x26bd78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x26BD74u, 0x26BD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD7Cu;
label_26bd7c:
    // 0x26bd7c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26bd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x26bd80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26bd80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x26bd84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26bd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26bd88: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x26bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26bd8c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26bd8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26bd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd94: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x26bd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x26bd98: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x26bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x26bd9c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x26BD9Cu;
    SET_GPR_U32(ctx, 31, 0x26BDA4u);
    ctx->pc = 0x26BDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD9Cu;
    // 0x26bda0: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x26BD9Cu, 0x26BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BDA4u;
label_26bda4:
    // 0x26bda4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26bda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bda8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26bda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bdac: 0xc074050  jal         func_1D0140
    ctx->pc = 0x26BDACu;
    SET_GPR_U32(ctx, 31, 0x26BDB4u);
    ctx->pc = 0x26BDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BDACu;
    // 0x26bdb0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0140u, 0x26BDACu, 0x26BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BDB4u;
label_26bdb4:
    // 0x26bdb4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x26bdb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_26bdb8:
    // 0x26bdb8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x26bdb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26bdbc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x26bdbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26bdc0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x26bdc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26bdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x26BDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDC4u;
        // 0x26bdc8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BDCCu;
    // 0x26bdcc: 0x0  nop
    ctx->pc = 0x26bdccu;
    // NOP
    ctx->pc = 0x26bdd0u;
}
