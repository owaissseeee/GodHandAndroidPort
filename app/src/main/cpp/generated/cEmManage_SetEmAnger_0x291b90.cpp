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

// Function: cEmManage_SetEmAnger
// Address: 0x291b90 - 0x291d48
void cEmManage_SetEmAnger_0x291b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_SetEmAnger_0x291b90");
#endif

    switch (ctx->pc) {
        case 0x291b90u: goto label_291b90;
        case 0x291b94u: goto label_291b94;
        case 0x291b98u: goto label_291b98;
        case 0x291b9cu: goto label_291b9c;
        case 0x291ba0u: goto label_291ba0;
        case 0x291ba4u: goto label_291ba4;
        case 0x291ba8u: goto label_291ba8;
        case 0x291bacu: goto label_291bac;
        case 0x291bb0u: goto label_291bb0;
        case 0x291bb4u: goto label_291bb4;
        case 0x291bb8u: goto label_291bb8;
        case 0x291bbcu: goto label_291bbc;
        case 0x291bc0u: goto label_291bc0;
        case 0x291bc4u: goto label_291bc4;
        case 0x291bc8u: goto label_291bc8;
        case 0x291bccu: goto label_291bcc;
        case 0x291bd0u: goto label_291bd0;
        case 0x291bd4u: goto label_291bd4;
        case 0x291bd8u: goto label_291bd8;
        case 0x291bdcu: goto label_291bdc;
        case 0x291be0u: goto label_291be0;
        case 0x291be4u: goto label_291be4;
        case 0x291be8u: goto label_291be8;
        case 0x291becu: goto label_291bec;
        case 0x291bf0u: goto label_291bf0;
        case 0x291bf4u: goto label_291bf4;
        case 0x291bf8u: goto label_291bf8;
        case 0x291bfcu: goto label_291bfc;
        case 0x291c00u: goto label_291c00;
        case 0x291c04u: goto label_291c04;
        case 0x291c08u: goto label_291c08;
        case 0x291c0cu: goto label_291c0c;
        case 0x291c10u: goto label_291c10;
        case 0x291c14u: goto label_291c14;
        case 0x291c18u: goto label_291c18;
        case 0x291c1cu: goto label_291c1c;
        case 0x291c20u: goto label_291c20;
        case 0x291c24u: goto label_291c24;
        case 0x291c28u: goto label_291c28;
        case 0x291c2cu: goto label_291c2c;
        case 0x291c30u: goto label_291c30;
        case 0x291c34u: goto label_291c34;
        case 0x291c38u: goto label_291c38;
        case 0x291c3cu: goto label_291c3c;
        case 0x291c40u: goto label_291c40;
        case 0x291c44u: goto label_291c44;
        case 0x291c48u: goto label_291c48;
        case 0x291c4cu: goto label_291c4c;
        case 0x291c50u: goto label_291c50;
        case 0x291c54u: goto label_291c54;
        case 0x291c58u: goto label_291c58;
        case 0x291c5cu: goto label_291c5c;
        case 0x291c60u: goto label_291c60;
        case 0x291c64u: goto label_291c64;
        case 0x291c68u: goto label_291c68;
        case 0x291c6cu: goto label_291c6c;
        case 0x291c70u: goto label_291c70;
        case 0x291c74u: goto label_291c74;
        case 0x291c78u: goto label_291c78;
        case 0x291c7cu: goto label_291c7c;
        case 0x291c80u: goto label_291c80;
        case 0x291c84u: goto label_291c84;
        case 0x291c88u: goto label_291c88;
        case 0x291c8cu: goto label_291c8c;
        case 0x291c90u: goto label_291c90;
        case 0x291c94u: goto label_291c94;
        case 0x291c98u: goto label_291c98;
        case 0x291c9cu: goto label_291c9c;
        case 0x291ca0u: goto label_291ca0;
        case 0x291ca4u: goto label_291ca4;
        case 0x291ca8u: goto label_291ca8;
        case 0x291cacu: goto label_291cac;
        case 0x291cb0u: goto label_291cb0;
        case 0x291cb4u: goto label_291cb4;
        case 0x291cb8u: goto label_291cb8;
        case 0x291cbcu: goto label_291cbc;
        case 0x291cc0u: goto label_291cc0;
        case 0x291cc4u: goto label_291cc4;
        case 0x291cc8u: goto label_291cc8;
        case 0x291cccu: goto label_291ccc;
        case 0x291cd0u: goto label_291cd0;
        case 0x291cd4u: goto label_291cd4;
        case 0x291cd8u: goto label_291cd8;
        case 0x291cdcu: goto label_291cdc;
        case 0x291ce0u: goto label_291ce0;
        case 0x291ce4u: goto label_291ce4;
        case 0x291ce8u: goto label_291ce8;
        case 0x291cecu: goto label_291cec;
        case 0x291cf0u: goto label_291cf0;
        case 0x291cf4u: goto label_291cf4;
        case 0x291cf8u: goto label_291cf8;
        case 0x291cfcu: goto label_291cfc;
        case 0x291d00u: goto label_291d00;
        case 0x291d04u: goto label_291d04;
        case 0x291d08u: goto label_291d08;
        case 0x291d0cu: goto label_291d0c;
        case 0x291d10u: goto label_291d10;
        case 0x291d14u: goto label_291d14;
        case 0x291d18u: goto label_291d18;
        case 0x291d1cu: goto label_291d1c;
        case 0x291d20u: goto label_291d20;
        case 0x291d24u: goto label_291d24;
        case 0x291d28u: goto label_291d28;
        case 0x291d2cu: goto label_291d2c;
        case 0x291d30u: goto label_291d30;
        case 0x291d34u: goto label_291d34;
        case 0x291d38u: goto label_291d38;
        case 0x291d3cu: goto label_291d3c;
        case 0x291d40u: goto label_291d40;
        case 0x291d44u: goto label_291d44;
        default: break;
    }

    ctx->pc = 0x291b90u;

label_291b90:
    // 0x291b90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x291b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_291b94:
    // 0x291b94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x291b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_291b98:
    // 0x291b98: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x291b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_291b9c:
    // 0x291b9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x291b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_291ba0:
    // 0x291ba0: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x291ba0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_291ba4:
    // 0x291ba4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x291ba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291ba8:
    // 0x291ba8: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x291ba8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_291bac:
    // 0x291bac: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x291bacu;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
label_291bb0:
    // 0x291bb0: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x291bb0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_291bb4:
    // 0x291bb4: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x291bb4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
label_291bb8:
    // 0x291bb8: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x291bb8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_291bbc:
    // 0x291bbc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x291bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_291bc0:
    // 0x291bc0: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x291bc0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_291bc4:
    // 0x291bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_291bc8:
    // 0x291bc8: 0xe7ba0080  swc1        $f26, 0x80($sp)
    ctx->pc = 0x291bc8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_291bcc:
    // 0x291bcc: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x291bccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_291bd0:
    // 0x291bd0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x291bd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_291bd4:
    // 0x291bd4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x291bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_291bd8:
    // 0x291bd8: 0x8c910500  lw          $s1, 0x500($a0)
    ctx->pc = 0x291bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1280)));
label_291bdc:
    // 0x291bdc: 0x1220004b  beqz        $s1, . + 4 + (0x4B << 2)
label_291be0:
    if (ctx->pc == 0x291BE0u) {
        ctx->pc = 0x291BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BDCu;
        // 0x291be0: 0x4616b5c2  mul.s       $f23, $f22, $f22 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291BE4u;
        goto label_291be4;
    }
    ctx->pc = 0x291BDCu;
    {
        const bool branch_taken_0x291bdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x291BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BDCu;
        // 0x291be0: 0x4616b5c2  mul.s       $f23, $f22, $f22 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291bdc) {
            ctx->pc = 0x291D0Cu;
            goto label_291d0c;
        }
    }
    ctx->pc = 0x291BE4u;
label_291be4:
    // 0x291be4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x291be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_291be8:
    // 0x291be8: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x291be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_291bec:
    // 0x291bec: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x291becu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_291bf0:
    // 0x291bf0: 0x52000044  beql        $s0, $zero, . + 4 + (0x44 << 2)
label_291bf4:
    if (ctx->pc == 0x291BF4u) {
        ctx->pc = 0x291BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BF0u;
        // 0x291bf4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291BF8u;
        goto label_291bf8;
    }
    ctx->pc = 0x291BF0u;
    {
        const bool branch_taken_0x291bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x291bf0) {
            ctx->pc = 0x291BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291BF0u;
            // 0x291bf4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291D04u;
            goto label_291d04;
        }
    }
    ctx->pc = 0x291BF8u;
label_291bf8:
    // 0x291bf8: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x291bf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_291bfc:
    // 0x291bfc: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x291bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_291c00:
    // 0x291c00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_291c04:
    if (ctx->pc == 0x291C04u) {
        ctx->pc = 0x291C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C00u;
        // 0x291c04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C08u;
        goto label_291c08;
    }
    ctx->pc = 0x291C00u;
    {
        const bool branch_taken_0x291c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C00u;
        // 0x291c04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c00) {
            ctx->pc = 0x291C10u;
            goto label_291c10;
        }
    }
    ctx->pc = 0x291C08u;
label_291c08:
    // 0x291c08: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x291c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_291c0c:
    // 0x291c0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291c10:
    // 0x291c10: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x291c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_291c14:
    // 0x291c14: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_291c18:
    if (ctx->pc == 0x291C18u) {
        ctx->pc = 0x291C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C14u;
        // 0x291c18: 0x28620280  slti        $v0, $v1, 0x280 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)640) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C1Cu;
        goto label_291c1c;
    }
    ctx->pc = 0x291C14u;
    {
        const bool branch_taken_0x291c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C14u;
        // 0x291c18: 0x28620280  slti        $v0, $v1, 0x280 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)640) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c14) {
            ctx->pc = 0x291D00u;
            goto label_291d00;
        }
    }
    ctx->pc = 0x291C1Cu;
label_291c1c:
    // 0x291c1c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x291c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_291c20:
    // 0x291c20: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
label_291c24:
    if (ctx->pc == 0x291C24u) {
        ctx->pc = 0x291C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C20u;
        // 0x291c24: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C28u;
        goto label_291c28;
    }
    ctx->pc = 0x291C20u;
    {
        const bool branch_taken_0x291c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291c20) {
            ctx->pc = 0x291C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291C20u;
            // 0x291c24: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291D04u;
            goto label_291d04;
        }
    }
    ctx->pc = 0x291C28u;
label_291c28:
    // 0x291c28: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x291c28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_291c2c:
    // 0x291c2c: 0x58400035  blezl       $v0, . + 4 + (0x35 << 2)
label_291c30:
    if (ctx->pc == 0x291C30u) {
        ctx->pc = 0x291C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C2Cu;
        // 0x291c30: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C34u;
        goto label_291c34;
    }
    ctx->pc = 0x291C2Cu;
    {
        const bool branch_taken_0x291c2c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x291c2c) {
            ctx->pc = 0x291C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291C2Cu;
            // 0x291c30: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291D04u;
            goto label_291d04;
        }
    }
    ctx->pc = 0x291C34u;
label_291c34:
    // 0x291c34: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x291c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_291c38:
    // 0x291c38: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x291c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_291c3c:
    // 0x291c3c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x291c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_291c40:
    // 0x291c40: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x291c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_291c44:
    // 0x291c44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x291c44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_291c48:
    // 0x291c48: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x291c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_291c4c:
    // 0x291c4c: 0x0  nop
    ctx->pc = 0x291c4cu;
    // NOP
label_291c50:
    // 0x291c50: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_291c54:
    if (ctx->pc == 0x291C54u) {
        ctx->pc = 0x291C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C50u;
        // 0x291c54: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C58u;
        goto label_291c58;
    }
    ctx->pc = 0x291C50u;
    {
        const bool branch_taken_0x291c50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C50u;
        // 0x291c54: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c50) {
            ctx->pc = 0x291C5Cu;
            goto label_291c5c;
        }
    }
    ctx->pc = 0x291C58u;
label_291c58:
    // 0x291c58: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x291c58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_291c5c:
    // 0x291c5c: 0x4600d034  c.lt.s      $f26, $f0
    ctx->pc = 0x291c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_291c60:
    // 0x291c60: 0x0  nop
    ctx->pc = 0x291c60u;
    // NOP
label_291c64:
    // 0x291c64: 0x45030027  bc1tl       . + 4 + (0x27 << 2)
label_291c68:
    if (ctx->pc == 0x291C68u) {
        ctx->pc = 0x291C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C64u;
        // 0x291c68: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C6Cu;
        goto label_291c6c;
    }
    ctx->pc = 0x291C64u;
    {
        const bool branch_taken_0x291c64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291c64) {
            ctx->pc = 0x291C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291C64u;
            // 0x291c68: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291D04u;
            goto label_291d04;
        }
    }
    ctx->pc = 0x291C6Cu;
label_291c6c:
    // 0x291c6c: 0xc07dfac  jal         func_1F7EB0
label_291c70:
    if (ctx->pc == 0x291C70u) {
        ctx->pc = 0x291C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C6Cu;
        // 0x291c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C74u;
        goto label_291c74;
    }
    ctx->pc = 0x291C6Cu;
    SET_GPR_U32(ctx, 31, 0x291C74u);
    ctx->pc = 0x291C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C6Cu;
    // 0x291c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x291C6Cu, 0x291C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C74u;
label_291c74:
    // 0x291c74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x291c74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_291c78:
    // 0x291c78: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x291c78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
label_291c7c:
    // 0x291c7c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x291c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_291c80:
    // 0x291c80: 0x0  nop
    ctx->pc = 0x291c80u;
    // NOP
label_291c84:
    // 0x291c84: 0x4503001f  bc1tl       . + 4 + (0x1F << 2)
label_291c88:
    if (ctx->pc == 0x291C88u) {
        ctx->pc = 0x291C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C84u;
        // 0x291c88: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C8Cu;
        goto label_291c8c;
    }
    ctx->pc = 0x291C84u;
    {
        const bool branch_taken_0x291c84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291c84) {
            ctx->pc = 0x291C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291C84u;
            // 0x291c88: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291D04u;
            goto label_291d04;
        }
    }
    ctx->pc = 0x291C8Cu;
label_291c8c:
    // 0x291c8c: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x291c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_291c90:
    // 0x291c90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_291c94:
    // 0x291c94: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x291c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_291c98:
    // 0x291c98: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x291c98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_291c9c:
    // 0x291c9c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x291c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_291ca0:
    // 0x291ca0: 0xc0b680e  jal         func_2DA038
label_291ca4:
    if (ctx->pc == 0x291CA4u) {
        ctx->pc = 0x291CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CA0u;
        // 0x291ca4: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291CA8u;
        goto label_291ca8;
    }
    ctx->pc = 0x291CA0u;
    SET_GPR_U32(ctx, 31, 0x291CA8u);
    ctx->pc = 0x291CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291CA0u;
    // 0x291ca4: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x291CA0u, 0x291CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291CA8u;
label_291ca8:
    // 0x291ca8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x291ca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_291cac:
    // 0x291cac: 0x0  nop
    ctx->pc = 0x291cacu;
    // NOP
label_291cb0:
    // 0x291cb0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_291cb4:
    if (ctx->pc == 0x291CB4u) {
        ctx->pc = 0x291CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CB0u;
        // 0x291cb4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291CB8u;
        goto label_291cb8;
    }
    ctx->pc = 0x291CB0u;
    {
        const bool branch_taken_0x291cb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CB0u;
        // 0x291cb4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291cb0) {
            ctx->pc = 0x291CBCu;
            goto label_291cbc;
        }
    }
    ctx->pc = 0x291CB8u;
label_291cb8:
    // 0x291cb8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x291cb8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_291cbc:
    // 0x291cbc: 0x4601c034  c.lt.s      $f24, $f1
    ctx->pc = 0x291cbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_291cc0:
    // 0x291cc0: 0x0  nop
    ctx->pc = 0x291cc0u;
    // NOP
label_291cc4:
    // 0x291cc4: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
label_291cc8:
    if (ctx->pc == 0x291CC8u) {
        ctx->pc = 0x291CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CC4u;
        // 0x291cc8: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291CCCu;
        goto label_291ccc;
    }
    ctx->pc = 0x291CC4u;
    {
        const bool branch_taken_0x291cc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291cc4) {
            ctx->pc = 0x291CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291CC4u;
            // 0x291cc8: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291D04u;
            goto label_291d04;
        }
    }
    ctx->pc = 0x291CCCu;
label_291ccc:
    // 0x291ccc: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x291cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_291cd0:
    // 0x291cd0: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x291cd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_291cd4:
    // 0x291cd4: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x291cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_291cd8:
    // 0x291cd8: 0x40f809  jalr        $v0
label_291cdc:
    if (ctx->pc == 0x291CDCu) {
        ctx->pc = 0x291CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CD8u;
        // 0x291cdc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291CE0u;
        goto label_291ce0;
    }
    ctx->pc = 0x291CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x291CE0u);
        ctx->pc = 0x291CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CD8u;
        // 0x291cdc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291CD8u, 0x291CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291CE0u;
label_291ce0:
    // 0x291ce0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_291ce4:
    if (ctx->pc == 0x291CE4u) {
        ctx->pc = 0x291CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CE0u;
        // 0x291ce4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291CE8u;
        goto label_291ce8;
    }
    ctx->pc = 0x291CE0u;
    {
        const bool branch_taken_0x291ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291ce0) {
            ctx->pc = 0x291CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291CE0u;
            // 0x291ce4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291D04u;
            goto label_291d04;
        }
    }
    ctx->pc = 0x291CE8u;
label_291ce8:
    // 0x291ce8: 0x4617a036  c.le.s      $f20, $f23
    ctx->pc = 0x291ce8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_291cec:
    // 0x291cec: 0x0  nop
    ctx->pc = 0x291cecu;
    // NOP
label_291cf0:
    // 0x291cf0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_291cf4:
    if (ctx->pc == 0x291CF4u) {
        ctx->pc = 0x291CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CF0u;
        // 0x291cf4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291CF8u;
        goto label_291cf8;
    }
    ctx->pc = 0x291CF0u;
    {
        const bool branch_taken_0x291cf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x291cf0) {
            ctx->pc = 0x291CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291CF0u;
            // 0x291cf4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291D04u;
            goto label_291d04;
        }
    }
    ctx->pc = 0x291CF8u;
label_291cf8:
    // 0x291cf8: 0x4600a5c6  mov.s       $f23, $f20
    ctx->pc = 0x291cf8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
label_291cfc:
    // 0x291cfc: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x291cfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_291d00:
    // 0x291d00: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x291d00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_291d04:
    // 0x291d04: 0x5620ffba  bnel        $s1, $zero, . + 4 + (-0x46 << 2)
label_291d08:
    if (ctx->pc == 0x291D08u) {
        ctx->pc = 0x291D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D04u;
        // 0x291d08: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291D0Cu;
        goto label_291d0c;
    }
    ctx->pc = 0x291D04u;
    {
        const bool branch_taken_0x291d04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x291d04) {
            ctx->pc = 0x291D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291D04u;
            // 0x291d08: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291bf0;
        }
    }
    ctx->pc = 0x291D0Cu;
label_291d0c:
    // 0x291d0c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x291d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_291d10:
    // 0x291d10: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x291d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_291d14:
    // 0x291d14: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x291d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_291d18:
    // 0x291d18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x291d18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_291d1c:
    // 0x291d1c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x291d1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_291d20:
    // 0x291d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_291d24:
    // 0x291d24: 0xc7ba0080  lwc1        $f26, 0x80($sp)
    ctx->pc = 0x291d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_291d28:
    // 0x291d28: 0xc7b90078  lwc1        $f25, 0x78($sp)
    ctx->pc = 0x291d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_291d2c:
    // 0x291d2c: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x291d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_291d30:
    // 0x291d30: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x291d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_291d34:
    // 0x291d34: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x291d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_291d38:
    // 0x291d38: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x291d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_291d3c:
    // 0x291d3c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x291d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_291d40:
    // 0x291d40: 0x3e00008  jr          $ra
label_291d44:
    if (ctx->pc == 0x291D44u) {
        ctx->pc = 0x291D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D40u;
        // 0x291d44: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291D48u;
        goto label_fallthrough_0x291d40;
    }
    ctx->pc = 0x291D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D40u;
        // 0x291d44: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x291d40:
    ctx->pc = 0x291D48u;
}
