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

// Function: __ieee754_powf
// Address: 0x3a2ed8 - 0x3a3768
void ps2___ieee754_powf_0x3a2ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_powf_0x3a2ed8");
#endif

    switch (ctx->pc) {
        case 0x3a3054u: goto label_3a3054;
        case 0x3a3064u: goto label_3a3064;
        case 0x3a3130u: goto label_3a3130;
        case 0x3a3724u: goto label_3a3724;
        default: break;
    }

    ctx->pc = 0x3a2ed8u;

    // 0x3a2ed8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a2ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3a2edc: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x3a2edcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3a2ee0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3a2ee0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3a2ee4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x3a2ee4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x3a2ee8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3a2ee8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3a2eec: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a2eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3a2ef0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3a2ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3a2ef4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3a2ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3a2ef8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3a2ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3a2efc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3a2efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3a2f00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a2f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a2f04: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x3a2f04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a2f08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3a2f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2f0c: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x3a2f0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a2f10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a2f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2f14: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3a2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3a2f18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a2f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a2f1c: 0x2428824  and         $s1, $s2, $v0
    ctx->pc = 0x3a2f1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x3a2f20: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A2F20u;
    {
        const bool branch_taken_0x3a2f20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F20u;
        // 0x3a2f24: 0x2628024  and         $s0, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f20) {
            ctx->pc = 0x3A2F38u;
            goto label_3a2f38;
        }
    }
    ctx->pc = 0x3A2F28u;
    // 0x3a2f28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a2f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a2f2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a2f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2f30: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x3A2F30u;
    {
        const bool branch_taken_0x3a2f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F30u;
        // 0x3a2f34: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f30) {
            ctx->pc = 0x3A3740u;
            goto label_3a3740;
        }
    }
    ctx->pc = 0x3A2F38u;
label_3a2f38:
    // 0x3a2f38: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x3a2f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x3a2f3c: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x3a2f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a2f40: 0x544001fe  bnel        $v0, $zero, . + 4 + (0x1FE << 2)
    ctx->pc = 0x3A2F40u;
    {
        const bool branch_taken_0x3a2f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2f40) {
            ctx->pc = 0x3A2F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2F40u;
            // 0x3a2f44: 0x4615a000  add.s       $f0, $f20, $f21 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A373Cu;
            goto label_3a373c;
        }
    }
    ctx->pc = 0x3A2F48u;
    // 0x3a2f48: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x3a2f48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3a2f4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2F4Cu;
    {
        const bool branch_taken_0x3a2f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2f4c) {
            ctx->pc = 0x3A2F5Cu;
            goto label_3a2f5c;
        }
    }
    ctx->pc = 0x3A2F54u;
    // 0x3a2f54: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x3A2F54u;
    {
        const bool branch_taken_0x3a2f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F54u;
        // 0x3a2f58: 0x4615a000  add.s       $f0, $f20, $f21 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f54) {
            ctx->pc = 0x3A373Cu;
            goto label_3a373c;
        }
    }
    ctx->pc = 0x3A2F5Cu;
label_3a2f5c:
    // 0x3a2f5c: 0x6610015  bgez        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A2F5Cu;
    {
        const bool branch_taken_0x3a2f5c = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x3A2F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F5Cu;
        // 0x3a2f60: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f5c) {
            ctx->pc = 0x3A2FB4u;
            goto label_3a2fb4;
        }
    }
    ctx->pc = 0x3A2F64u;
    // 0x3a2f64: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x3a2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x3a2f68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a2f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a2f6c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x3a2f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3a2f70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2F70u;
    {
        const bool branch_taken_0x3a2f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F70u;
        // 0x3a2f74: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f70) {
            ctx->pc = 0x3A2F80u;
            goto label_3a2f80;
        }
    }
    ctx->pc = 0x3A2F78u;
    // 0x3a2f78: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3A2F78u;
    {
        const bool branch_taken_0x3a2f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F78u;
        // 0x3a2f7c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f78) {
            ctx->pc = 0x3A2FB4u;
            goto label_3a2fb4;
        }
    }
    ctx->pc = 0x3A2F80u;
label_3a2f80:
    // 0x3a2f80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a2f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a2f84: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x3a2f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3a2f88: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A2F88u;
    {
        const bool branch_taken_0x3a2f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F88u;
        // 0x3a2f8c: 0x111dc3  sra         $v1, $s1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f88) {
            ctx->pc = 0x3A2FB4u;
            goto label_3a2fb4;
        }
    }
    ctx->pc = 0x3A2F90u;
    // 0x3a2f90: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x3a2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x3a2f94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3a2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a2f98: 0x512807  srav        $a1, $s1, $v0
    ctx->pc = 0x3a2f98u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x3a2f9c: 0x451004  sllv        $v0, $a1, $v0
    ctx->pc = 0x3a2f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x3a2fa0: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A2FA0u;
    {
        const bool branch_taken_0x3a2fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x3A2FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2FA0u;
        // 0x3a2fa4: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2fa0) {
            ctx->pc = 0x3A2FB8u;
            goto label_3a2fb8;
        }
    }
    ctx->pc = 0x3A2FA8u;
    // 0x3a2fa8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3a2fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3a2fac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a2facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a2fb0: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x3a2fb0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a2fb4:
    // 0x3a2fb4: 0x3c027f80  lui         $v0, 0x7F80
    ctx->pc = 0x3a2fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
label_3a2fb8:
    // 0x3a2fb8: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A2FB8u;
    {
        const bool branch_taken_0x3a2fb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A2FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2FB8u;
        // 0x3a2fbc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2fb8) {
            ctx->pc = 0x3A3000u;
            goto label_3a3000;
        }
    }
    ctx->pc = 0x3A2FC0u;
    // 0x3a2fc0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2FC0u;
    {
        const bool branch_taken_0x3a2fc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2FC0u;
        // 0x3a2fc4: 0x50102a  slt         $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2fc0) {
            ctx->pc = 0x3A2FD0u;
            goto label_3a2fd0;
        }
    }
    ctx->pc = 0x3A2FC8u;
    // 0x3a2fc8: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x3A2FC8u;
    {
        const bool branch_taken_0x3a2fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2FC8u;
        // 0x3a2fcc: 0x4615a801  sub.s       $f0, $f21, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2fc8) {
            ctx->pc = 0x3A373Cu;
            goto label_3a373c;
        }
    }
    ctx->pc = 0x3A2FD0u;
label_3a2fd0:
    // 0x3a2fd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A2FD0u;
    {
        const bool branch_taken_0x3a2fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2fd0) {
            ctx->pc = 0x3A2FECu;
            goto label_3a2fec;
        }
    }
    ctx->pc = 0x3A2FD8u;
    // 0x3a2fd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a2fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2fdc: 0x64301d7  bgezl       $s2, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x3A2FDCu;
    {
        const bool branch_taken_0x3a2fdc = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x3a2fdc) {
            ctx->pc = 0x3A2FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2FDCu;
            // 0x3a2fe0: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A373Cu;
            goto label_3a373c;
        }
    }
    ctx->pc = 0x3A2FE4u;
    // 0x3a2fe4: 0x100001d6  b           . + 4 + (0x1D6 << 2)
    ctx->pc = 0x3A2FE4u;
    {
        const bool branch_taken_0x3a2fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2FE4u;
        // 0x3a2fe8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2fe4) {
            ctx->pc = 0x3A3740u;
            goto label_3a3740;
        }
    }
    ctx->pc = 0x3A2FECu;
label_3a2fec:
    // 0x3a2fec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a2fecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2ff0: 0x64201d2  bltzl       $s2, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x3A2FF0u;
    {
        const bool branch_taken_0x3a2ff0 = (GPR_S64(ctx, 18) < 0);
        if (branch_taken_0x3a2ff0) {
            ctx->pc = 0x3A2FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2FF0u;
            // 0x3a2ff4: 0x4600a807  neg.s       $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A373Cu;
            goto label_3a373c;
        }
    }
    ctx->pc = 0x3A2FF8u;
    // 0x3a2ff8: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x3A2FF8u;
    {
        const bool branch_taken_0x3a2ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2FF8u;
        // 0x3a2ffc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2ff8) {
            ctx->pc = 0x3A3740u;
            goto label_3a3740;
        }
    }
    ctx->pc = 0x3A3000u;
label_3a3000:
    // 0x3a3000: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A3000u;
    {
        const bool branch_taken_0x3a3000 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a3000) {
            ctx->pc = 0x3A3004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3000u;
            // 0x3a3004: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A302Cu;
            goto label_3a302c;
        }
    }
    ctx->pc = 0x3A3008u;
    // 0x3a3008: 0x64101cc  bgez        $s2, . + 4 + (0x1CC << 2)
    ctx->pc = 0x3A3008u;
    {
        const bool branch_taken_0x3a3008 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x3A300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3008u;
        // 0x3a300c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3008) {
            ctx->pc = 0x3A373Cu;
            goto label_3a373c;
        }
    }
    ctx->pc = 0x3A3010u;
    // 0x3a3010: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a3010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a3014: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a3014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3018: 0x0  nop
    ctx->pc = 0x3a3018u;
    // NOP
    // 0x3a301c: 0x0  nop
    ctx->pc = 0x3a301cu;
    // NOP
    // 0x3a3020: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x3a3020u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[20]);
    // 0x3a3024: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x3A3024u;
    {
        const bool branch_taken_0x3a3024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3024u;
        // 0x3a3028: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3024) {
            ctx->pc = 0x3A3740u;
            goto label_3a3740;
        }
    }
    ctx->pc = 0x3A302Cu;
label_3a302c:
    // 0x3a302c: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A302Cu;
    {
        const bool branch_taken_0x3a302c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A302Cu;
        // 0x3a3030: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a302c) {
            ctx->pc = 0x3A303Cu;
            goto label_3a303c;
        }
    }
    ctx->pc = 0x3A3034u;
    // 0x3a3034: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x3A3034u;
    {
        const bool branch_taken_0x3a3034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3034u;
        // 0x3a3038: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3034) {
            ctx->pc = 0x3A373Cu;
            goto label_3a373c;
        }
    }
    ctx->pc = 0x3A303Cu;
label_3a303c:
    // 0x3a303c: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A303Cu;
    {
        const bool branch_taken_0x3a303c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a303c) {
            ctx->pc = 0x3A305Cu;
            goto label_3a305c;
        }
    }
    ctx->pc = 0x3A3044u;
    // 0x3a3044: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3044u;
    {
        const bool branch_taken_0x3a3044 = (GPR_S64(ctx, 19) < 0);
        if (branch_taken_0x3a3044) {
            ctx->pc = 0x3A305Cu;
            goto label_3a305c;
        }
    }
    ctx->pc = 0x3A304Cu;
    // 0x3a304c: 0xc0e8ed2  jal         func_3A3B48
    ctx->pc = 0x3A304Cu;
    SET_GPR_U32(ctx, 31, 0x3A3054u);
    ctx->pc = 0x3A3050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A304Cu;
    // 0x3a3050: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3B48u, 0x3A304Cu, 0x3A3054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3054u;
label_3a3054:
    // 0x3a3054: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x3A3054u;
    {
        const bool branch_taken_0x3a3054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3054u;
        // 0x3a3058: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3054) {
            ctx->pc = 0x3A3740u;
            goto label_3a3740;
        }
    }
    ctx->pc = 0x3A305Cu;
label_3a305c:
    // 0x3a305c: 0xc0e8676  jal         func_3A19D8
    ctx->pc = 0x3A305Cu;
    SET_GPR_U32(ctx, 31, 0x3A3064u);
    ctx->pc = 0x3A3060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A305Cu;
    // 0x3a3060: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A19D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A19D8u, 0x3A305Cu, 0x3A3064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3064u;
label_3a3064:
    // 0x3a3064: 0x3c027f80  lui         $v0, 0x7F80
    ctx->pc = 0x3a3064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
    // 0x3a3068: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A3068u;
    {
        const bool branch_taken_0x3a3068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3068u;
        // 0x3a306c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3068) {
            ctx->pc = 0x3A3084u;
            goto label_3a3084;
        }
    }
    ctx->pc = 0x3A3070u;
    // 0x3a3070: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A3070u;
    {
        const bool branch_taken_0x3a3070 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3070) {
            ctx->pc = 0x3A3084u;
            goto label_3a3084;
        }
    }
    ctx->pc = 0x3A3078u;
    // 0x3a3078: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x3a3078u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x3a307c: 0x16060019  bne         $s0, $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A307Cu;
    {
        const bool branch_taken_0x3a307c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x3A3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A307Cu;
        // 0x3a3080: 0x1357c2  srl         $t2, $s3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a307c) {
            ctx->pc = 0x3A30E4u;
            goto label_3a30e4;
        }
    }
    ctx->pc = 0x3A3084u;
label_3a3084:
    // 0x3a3084: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A3084u;
    {
        const bool branch_taken_0x3a3084 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x3A3088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3084u;
        // 0x3a3088: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3084) {
            ctx->pc = 0x3A30A0u;
            goto label_3a30a0;
        }
    }
    ctx->pc = 0x3A308Cu;
    // 0x3a308c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a308cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a3090: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a3090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3094: 0x0  nop
    ctx->pc = 0x3a3094u;
    // NOP
    // 0x3a3098: 0x0  nop
    ctx->pc = 0x3a3098u;
    // NOP
    // 0x3a309c: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x3a309cu;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[13]);
label_3a30a0:
    // 0x3a30a0: 0x66101a6  bgez        $s3, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x3A30A0u;
    {
        const bool branch_taken_0x3a30a0 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x3A30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30A0u;
        // 0x3a30a4: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a30a0) {
            ctx->pc = 0x3A373Cu;
            goto label_3a373c;
        }
    }
    ctx->pc = 0x3A30A8u;
    // 0x3a30a8: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x3a30a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x3a30ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a30acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a30b0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x3a30b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x3a30b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A30B4u;
    {
        const bool branch_taken_0x3a30b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30B4u;
        // 0x3a30b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a30b4) {
            ctx->pc = 0x3A30D4u;
            goto label_3a30d4;
        }
    }
    ctx->pc = 0x3A30BCu;
    // 0x3a30bc: 0x460d6801  sub.s       $f0, $f13, $f13
    ctx->pc = 0x3a30bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[13]);
    // 0x3a30c0: 0x0  nop
    ctx->pc = 0x3a30c0u;
    // NOP
    // 0x3a30c4: 0x0  nop
    ctx->pc = 0x3a30c4u;
    // NOP
    // 0x3a30c8: 0x46000343  div.s       $f13, $f0, $f0
    ctx->pc = 0x3a30c8u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[0]);
    // 0x3a30cc: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x3A30CCu;
    {
        const bool branch_taken_0x3a30cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30CCu;
        // 0x3a30d0: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a30cc) {
            ctx->pc = 0x3A373Cu;
            goto label_3a373c;
        }
    }
    ctx->pc = 0x3A30D4u;
label_3a30d4:
    // 0x3a30d4: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A30D4u;
    {
        const bool branch_taken_0x3a30d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a30d4) {
            ctx->pc = 0x3A30D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A30D4u;
            // 0x3a30d8: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
            ctx->f[13] = FPU_NEG_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A30DCu;
            goto label_3a30dc;
        }
    }
    ctx->pc = 0x3A30DCu;
label_3a30dc:
    // 0x3a30dc: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x3A30DCu;
    {
        const bool branch_taken_0x3a30dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A30E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30DCu;
        // 0x3a30e0: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a30dc) {
            ctx->pc = 0x3A373Cu;
            goto label_3a373c;
        }
    }
    ctx->pc = 0x3A30E4u;
label_3a30e4:
    // 0x3a30e4: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x3a30e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3a30e8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x3a30e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x3a30ec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A30ECu;
    {
        const bool branch_taken_0x3a30ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A30F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30ECu;
        // 0x3a30f0: 0x3c024d00  lui         $v0, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19712 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a30ec) {
            ctx->pc = 0x3A310Cu;
            goto label_3a310c;
        }
    }
    ctx->pc = 0x3A30F4u;
    // 0x3a30f4: 0x4614a001  sub.s       $f0, $f20, $f20
    ctx->pc = 0x3a30f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[20]);
    // 0x3a30f8: 0x0  nop
    ctx->pc = 0x3a30f8u;
    // NOP
    // 0x3a30fc: 0x0  nop
    ctx->pc = 0x3a30fcu;
    // NOP
    // 0x3a3100: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x3a3100u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[0]);
    // 0x3a3104: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x3A3104u;
    {
        const bool branch_taken_0x3a3104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3104u;
        // 0x3a3108: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3104) {
            ctx->pc = 0x3A3740u;
            goto label_3a3740;
        }
    }
    ctx->pc = 0x3A310Cu;
label_3a310c:
    // 0x3a310c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x3a310cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3a3110: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3A3110u;
    {
        const bool branch_taken_0x3a3110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3110u;
        // 0x3a3114: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3110) {
            ctx->pc = 0x3A31F8u;
            goto label_3a31f8;
        }
    }
    ctx->pc = 0x3A3118u;
    // 0x3a3118: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x3a3118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x3a311c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3a311cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a3120: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3120u;
    {
        const bool branch_taken_0x3a3120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3120u;
        // 0x3a3124: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3120) {
            ctx->pc = 0x3A3138u;
            goto label_3a3138;
        }
    }
    ctx->pc = 0x3A3128u;
    // 0x3a3128: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A3128u;
    {
        const bool branch_taken_0x3a3128 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x3A312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3128u;
        // 0x3a312c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3128) {
            ctx->pc = 0x3A3150u;
            goto label_3a3150;
        }
    }
    ctx->pc = 0x3A3130u;
label_3a3130:
    // 0x3a3130: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x3A3130u;
    {
        const bool branch_taken_0x3a3130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3130u;
        // 0x3a3134: 0xc440ebcc  lwc1        $f0, -0x1434($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3130) {
            ctx->pc = 0x3A373Cu;
            goto label_3a373c;
        }
    }
    ctx->pc = 0x3A3138u;
label_3a3138:
    // 0x3a3138: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x3a3138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x3a313c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3a313cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a3140: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A3140u;
    {
        const bool branch_taken_0x3a3140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3140) {
            ctx->pc = 0x3A315Cu;
            goto label_3a315c;
        }
    }
    ctx->pc = 0x3A3148u;
    // 0x3a3148: 0x1e40fff9  bgtz        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A3148u;
    {
        const bool branch_taken_0x3a3148 = (GPR_S64(ctx, 18) > 0);
        ctx->pc = 0x3A314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3148u;
        // 0x3a314c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3148) {
            ctx->pc = 0x3A3130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3130;
        }
    }
    ctx->pc = 0x3A3150u;
label_3a3150:
    // 0x3a3150: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a3150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3154: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x3A3154u;
    {
        const bool branch_taken_0x3a3154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3154u;
        // 0x3a3158: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3154) {
            ctx->pc = 0x3A3740u;
            goto label_3a3740;
        }
    }
    ctx->pc = 0x3A315Cu;
label_3a315c:
    // 0x3a315c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a315cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a3160: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a3160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a3164: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3a3164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x3a3168: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a3168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a316c: 0x4601a301  sub.s       $f12, $f20, $f1
    ctx->pc = 0x3a316cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x3a3170: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x3a3170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x3a3174: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x3a3174u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x3a3178: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a3178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a317c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a317cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a3180: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3a3180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a3184: 0x3c0136ec  lui         $at, 0x36EC
    ctx->pc = 0x3a3184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14060 << 16));
    // 0x3a3188: 0x3421a570  ori         $at, $at, 0xA570
    ctx->pc = 0x3a3188u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42352);
    // 0x3a318c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3a318cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a3190: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x3a3190u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x3a3194: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x3a3194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x3a3198: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x3a3198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
    // 0x3a319c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a319cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a31a0: 0x460c6182  mul.s       $f6, $f12, $f12
    ctx->pc = 0x3a31a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x3a31a4: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x3a31a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x3a31a8: 0x3421aa00  ori         $at, $at, 0xAA00
    ctx->pc = 0x3a31a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43520);
    // 0x3a31ac: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3a31acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3a31b0: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x3a31b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x3a31b4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a31b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3a31b8: 0x460563c2  mul.s       $f15, $f12, $f5
    ctx->pc = 0x3a31b8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x3a31bc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3a31bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3a31c0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3a31c0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3a31c4: 0x46033242  mul.s       $f9, $f6, $f3
    ctx->pc = 0x3a31c4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x3a31c8: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x3a31c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x3a31cc: 0x46012381  sub.s       $f14, $f4, $f1
    ctx->pc = 0x3a31ccu;
    ctx->f[14] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x3a31d0: 0x460e7800  add.s       $f0, $f15, $f14
    ctx->pc = 0x3a31d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x3a31d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a31d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a31d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a31dc: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3a31dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x3a31e0: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x3a31e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a31e4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3a31e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a31e8: 0x460f0801  sub.s       $f0, $f1, $f15
    ctx->pc = 0x3a31e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[15]);
    // 0x3a31ec: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x3A31ECu;
    {
        const bool branch_taken_0x3a31ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A31F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A31ECu;
        // 0x3a31f0: 0x46007041  sub.s       $f1, $f14, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a31ec) {
            ctx->pc = 0x3A3468u;
            goto label_3a3468;
        }
    }
    ctx->pc = 0x3A31F4u;
    // 0x3a31f4: 0x0  nop
    ctx->pc = 0x3a31f4u;
    // NOP
label_3a31f8:
    // 0x3a31f8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x3a31f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x3a31fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a31fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a3200: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x3a3200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a3204: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A3204u;
    {
        const bool branch_taken_0x3a3204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3204u;
        // 0x3a3208: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3204) {
            ctx->pc = 0x3A3220u;
            goto label_3a3220;
        }
    }
    ctx->pc = 0x3A320Cu;
    // 0x3a320c: 0x3c014b80  lui         $at, 0x4B80
    ctx->pc = 0x3a320cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19328 << 16));
    // 0x3a3210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a3210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3214: 0x2409ffe8  addiu       $t1, $zero, -0x18
    ctx->pc = 0x3a3214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967272));
    // 0x3a3218: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x3a3218u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3a321c: 0x44106000  mfc1        $s0, $f12
    ctx->pc = 0x3a321cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_3a3220:
    // 0x3a3220: 0x2032824  and         $a1, $s0, $v1
    ctx->pc = 0x3a3220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x3a3224: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3a3224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3a3228: 0x101dc3  sra         $v1, $s0, 23
    ctx->pc = 0x3a3228u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 23));
    // 0x3a322c: 0x2524ff81  addiu       $a0, $t1, -0x7F
    ctx->pc = 0x3a322cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967169));
    // 0x3a3230: 0x3442c471  ori         $v0, $v0, 0xC471
    ctx->pc = 0x3a3230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50289);
    // 0x3a3234: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x3a3234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a3238: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3a3238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3a323c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A323Cu;
    {
        const bool branch_taken_0x3a323c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A323Cu;
        // 0x3a3240: 0xa68025  or          $s0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a323c) {
            ctx->pc = 0x3A324Cu;
            goto label_3a324c;
        }
    }
    ctx->pc = 0x3A3244u;
    // 0x3a3244: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A3244u;
    {
        const bool branch_taken_0x3a3244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3244u;
        // 0x3a3248: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3244) {
            ctx->pc = 0x3A3270u;
            goto label_3a3270;
        }
    }
    ctx->pc = 0x3A324Cu;
label_3a324c:
    // 0x3a324c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3a324cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x3a3250: 0x3442b3d6  ori         $v0, $v0, 0xB3D6
    ctx->pc = 0x3a3250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46038);
    // 0x3a3254: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3a3254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3a3258: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3258u;
    {
        const bool branch_taken_0x3a3258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3258u;
        // 0x3a325c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3258) {
            ctx->pc = 0x3A3270u;
            goto label_3a3270;
        }
    }
    ctx->pc = 0x3A3260u;
    // 0x3a3260: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x3a3260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x3a3264: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a3264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3268: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3a3268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a326c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3a326cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3a3270:
    // 0x3a3270: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x3a3270u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3274: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a3274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a3278: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x3a3278u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3a327c: 0x2442eb48  addiu       $v0, $v0, -0x14B8
    ctx->pc = 0x3a327cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961992));
    // 0x3a3280: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3a3280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3a3284: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a3284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a3288: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a3288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a328c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3a328cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a3290: 0x46026000  add.s       $f0, $f12, $f2
    ctx->pc = 0x3a3290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x3a3294: 0x460263c1  sub.s       $f15, $f12, $f2
    ctx->pc = 0x3a3294u;
    ctx->f[15] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x3a3298: 0x0  nop
    ctx->pc = 0x3a3298u;
    // NOP
    // 0x3a329c: 0x0  nop
    ctx->pc = 0x3a329cu;
    // NOP
    // 0x3a32a0: 0x46000b83  div.s       $f14, $f1, $f0
    ctx->pc = 0x3a32a0u;
    ctx->f[14] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x3a32a4: 0x460e7d02  mul.s       $f20, $f15, $f14
    ctx->pc = 0x3a32a4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[15], ctx->f[14]);
    // 0x3a32a8: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x3a32a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a32ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a32acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a32b0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3a32b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x3a32b4: 0x34c6f000  ori         $a2, $a2, 0xF000
    ctx->pc = 0x3a32b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61440);
    // 0x3a32b8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3a32b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3a32bc: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x3a32bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3a32c0: 0x101843  sra         $v1, $s0, 1
    ctx->pc = 0x3a32c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 1));
    // 0x3a32c4: 0x81540  sll         $v0, $t0, 21
    ctx->pc = 0x3a32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 21));
    // 0x3a32c8: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x3a32c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x3a32cc: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x3a32ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x3a32d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3a32d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3a32d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3a32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3a32d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a32d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a32dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a32dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a32e0: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x3a32e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3a32e4: 0x3c013e53  lui         $at, 0x3E53
    ctx->pc = 0x3a32e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15955 << 16));
    // 0x3a32e8: 0x3421f142  ori         $at, $at, 0xF142
    ctx->pc = 0x3a32e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61762);
    // 0x3a32ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a32ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a32f0: 0x3c013e6c  lui         $at, 0x3E6C
    ctx->pc = 0x3a32f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15980 << 16));
    // 0x3a32f4: 0x34213255  ori         $at, $at, 0x3255
    ctx->pc = 0x3a32f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12885);
    // 0x3a32f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3a32f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a32fc: 0x4614a2c2  mul.s       $f11, $f20, $f20
    ctx->pc = 0x3a32fcu;
    ctx->f[11] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x3a3300: 0x3c013e8b  lui         $at, 0x3E8B
    ctx->pc = 0x3a3300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16011 << 16));
    // 0x3a3304: 0x3421a305  ori         $at, $at, 0xA305
    ctx->pc = 0x3a3304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41733);
    // 0x3a3308: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x3a3308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3a330c: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x3a330cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x3a3310: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x3a3310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x3a3314: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x3a3314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x3a3318: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x3a3318u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x3a331c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3a331cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a3320: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3a3320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3a3324: 0x3c013edb  lui         $at, 0x3EDB
    ctx->pc = 0x3a3324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16091 << 16));
    // 0x3a3328: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x3a3328u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x3a332c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x3a332cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x3a3330: 0x46042842  mul.s       $f1, $f5, $f4
    ctx->pc = 0x3a3330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x3a3334: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3a3334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x3a3338: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3a3338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3a333c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x3a333cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x3a3340: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x3a3340u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x3a3344: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3a3344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x3a3348: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3a3348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a334c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3a334cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3a3350: 0x46017841  sub.s       $f1, $f15, $f1
    ctx->pc = 0x3a3350u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
    // 0x3a3354: 0x460b5982  mul.s       $f6, $f11, $f11
    ctx->pc = 0x3a3354u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x3a3358: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3a3358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3a335c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3a335cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3a3360: 0x461428c0  add.s       $f3, $f5, $f20
    ctx->pc = 0x3a3360u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
    // 0x3a3364: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x3a3364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3a3368: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x3a3368u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x3a336c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3a336cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3a3370: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x3a3370u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3a3374: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x3a3374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x3a3378: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3a3378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3a337c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x3a337cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x3a3380: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3a3380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3a3384: 0x46052ac2  mul.s       $f11, $f5, $f5
    ctx->pc = 0x3a3384u;
    ctx->f[11] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x3a3388: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x3a3388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x3a338c: 0x46045880  add.s       $f2, $f11, $f4
    ctx->pc = 0x3a338cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x3a3390: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3a3390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3a3394: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3a3394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3a3398: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3a3398u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3a339c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x3a339cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a33a0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3a33a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3a33a4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3a33a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a33a8: 0x46041101  sub.s       $f4, $f2, $f4
    ctx->pc = 0x3a33a8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x3a33ac: 0x460b2101  sub.s       $f4, $f4, $f11
    ctx->pc = 0x3a33acu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[11]);
    // 0x3a33b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3a33b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3a33b4: 0x46022bc2  mul.s       $f15, $f5, $f2
    ctx->pc = 0x3a33b4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x3a33b8: 0x46040081  sub.s       $f2, $f0, $f4
    ctx->pc = 0x3a33b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x3a33bc: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x3a33bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3a33c0: 0x46000b80  add.s       $f14, $f1, $f0
    ctx->pc = 0x3a33c0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a33c4: 0x460e78c0  add.s       $f3, $f15, $f14
    ctx->pc = 0x3a33c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x3a33c8: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x3a33c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a33cc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3a33ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3a33d0: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x3a33d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3a33d4: 0x460f3881  sub.s       $f2, $f7, $f15
    ctx->pc = 0x3a33d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[15]);
    // 0x3a33d8: 0x3c01369d  lui         $at, 0x369D
    ctx->pc = 0x3a33d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13981 << 16));
    // 0x3a33dc: 0x3421c3a0  ori         $at, $at, 0xC3A0
    ctx->pc = 0x3a33dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50080);
    // 0x3a33e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a33e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a33e4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a33e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a33e8: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x3a33e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x3a33ec: 0x3421384f  ori         $at, $at, 0x384F
    ctx->pc = 0x3a33ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14415);
    // 0x3a33f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a33f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a33f4: 0x2442eb58  addiu       $v0, $v0, -0x14A8
    ctx->pc = 0x3a33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962008));
    // 0x3a33f8: 0x46027181  sub.s       $f6, $f14, $f2
    ctx->pc = 0x3a33f8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[14], ctx->f[2]);
    // 0x3a33fc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3a33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3a3400: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x3a3400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x3a3404: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x3a3404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a3408: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x3a3408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x3a340c: 0x34213800  ori         $at, $at, 0x3800
    ctx->pc = 0x3a340cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14336);
    // 0x3a3410: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a3410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a3414: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a3414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a3418: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3a3418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3a341c: 0x2442eb50  addiu       $v0, $v0, -0x14B0
    ctx->pc = 0x3a341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962000));
    // 0x3a3420: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x3a3420u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x3a3424: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3a3424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3a3428: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x3a3428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a342c: 0x44896000  mtc1        $t1, $f12
    ctx->pc = 0x3a342cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3430: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x3a3430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3a3434: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a3434u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a3438: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3a3438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3a343c: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x3a343cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3a3440: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3a3440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3a3444: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x3a3444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x3a3448: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a3448u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a344c: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x3a344cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3a3450: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x3a3450u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a3454: 0x460c2001  sub.s       $f0, $f4, $f12
    ctx->pc = 0x3a3454u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x3a3458: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3a3458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3a345c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a345cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3a3460: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a3460u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a3464: 0x0  nop
    ctx->pc = 0x3a3464u;
    // NOP
label_3a3468:
    // 0x3a3468: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x3a3468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3a346c: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x3a346cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3a3470: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a3470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a3474: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a3474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a3478: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a3478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3a347c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A347Cu;
    {
        const bool branch_taken_0x3a347c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a347c) {
            ctx->pc = 0x3A348Cu;
            goto label_3a348c;
        }
    }
    ctx->pc = 0x3A3484u;
    // 0x3a3484: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3a3484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3a3488: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a3488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a348c:
    // 0x3a348c: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x3a348cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a3490: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a3490u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3494: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a3494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a3498: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3a3498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x3a349c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a349cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a34a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3a34a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a34a4: 0x4602a801  sub.s       $f0, $f21, $f2
    ctx->pc = 0x3a34a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x3a34a8: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3a34a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a34ac: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x3a34acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x3a34b0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3a34b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3a34b4: 0x460311c2  mul.s       $f7, $f2, $f3
    ctx->pc = 0x3a34b4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3a34b8: 0x46010180  add.s       $f6, $f0, $f1
    ctx->pc = 0x3a34b8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a34bc: 0x46073340  add.s       $f13, $f6, $f7
    ctx->pc = 0x3a34bcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x3a34c0: 0x44076800  mfc1        $a3, $f13
    ctx->pc = 0x3a34c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x3a34c4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3a34c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a34c8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x3a34c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x3a34cc: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x3a34ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3a34d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A34D0u;
    {
        const bool branch_taken_0x3a34d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a34d0) {
            ctx->pc = 0x3A34F0u;
            goto label_3a34f0;
        }
    }
    ctx->pc = 0x3A34D8u;
    // 0x3a34d8: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x3a34d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x3a34dc: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x3a34dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x3a34e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a34e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a34e4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3A34E4u;
    {
        const bool branch_taken_0x3a34e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A34E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A34E4u;
        // 0x3a34e8: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a34e4) {
            ctx->pc = 0x3A3578u;
            goto label_3a3578;
        }
    }
    ctx->pc = 0x3A34ECu;
    // 0x3a34ec: 0x0  nop
    ctx->pc = 0x3a34ecu;
    // NOP
label_3a34f0:
    // 0x3a34f0: 0x14a3000f  bne         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3A34F0u;
    {
        const bool branch_taken_0x3a34f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A34F0u;
        // 0x3a34f4: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a34f0) {
            ctx->pc = 0x3A3530u;
            goto label_3a3530;
        }
    }
    ctx->pc = 0x3A34F8u;
    // 0x3a34f8: 0x3c013338  lui         $at, 0x3338
    ctx->pc = 0x3a34f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13112 << 16));
    // 0x3a34fc: 0x3421aa3c  ori         $at, $at, 0xAA3C
    ctx->pc = 0x3a34fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43580);
    // 0x3a3500: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a3500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3504: 0x46076841  sub.s       $f1, $f13, $f7
    ctx->pc = 0x3a3504u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[7]);
    // 0x3a3508: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x3a3508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x3a350c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a350cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a3510: 0x0  nop
    ctx->pc = 0x3a3510u;
    // NOP
    // 0x3a3514: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x3A3514u;
    {
        const bool branch_taken_0x3a3514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A3518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3514u;
        // 0x3a3518: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3514) {
            ctx->pc = 0x3A3580u;
            goto label_3a3580;
        }
    }
    ctx->pc = 0x3A351Cu;
    // 0x3a351c: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x3a351cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x3a3520: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x3a3520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x3a3524: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a3524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a3528: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3A3528u;
    {
        const bool branch_taken_0x3a3528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3528u;
        // 0x3a352c: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3528) {
            ctx->pc = 0x3A3578u;
            goto label_3a3578;
        }
    }
    ctx->pc = 0x3A3530u;
label_3a3530:
    // 0x3a3530: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x3a3530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x3a3534: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a3534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a3538: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3a3538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3a353c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3a353cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a3540: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A3540u;
    {
        const bool branch_taken_0x3a3540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3540) {
            ctx->pc = 0x3A3568u;
            goto label_3a3568;
        }
    }
    ctx->pc = 0x3A3548u;
    // 0x3a3548: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x3a3548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x3a354c: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A354Cu;
    {
        const bool branch_taken_0x3a354c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A3550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A354Cu;
        // 0x3a3550: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a354c) {
            ctx->pc = 0x3A3580u;
            goto label_3a3580;
        }
    }
    ctx->pc = 0x3A3554u;
    // 0x3a3554: 0x46076801  sub.s       $f0, $f13, $f7
    ctx->pc = 0x3a3554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[7]);
    // 0x3a3558: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x3a3558u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a355c: 0x0  nop
    ctx->pc = 0x3a355cu;
    // NOP
    // 0x3a3560: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3A3560u;
    {
        const bool branch_taken_0x3a3560 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A3564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3560u;
        // 0x3a3564: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3560) {
            ctx->pc = 0x3A3584u;
            goto label_3a3584;
        }
    }
    ctx->pc = 0x3A3568u;
label_3a3568:
    // 0x3a3568: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x3a3568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x3a356c: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x3a356cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x3a3570: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a3570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a3574: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x3a3574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_3a3578:
    // 0x3a3578: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x3A3578u;
    {
        const bool branch_taken_0x3a3578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3578u;
        // 0x3a357c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3578) {
            ctx->pc = 0x3A373Cu;
            goto label_3a373c;
        }
    }
    ctx->pc = 0x3A3580u;
label_3a3580:
    // 0x3a3580: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3a3580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3a3584:
    // 0x3a3584: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3a3584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x3a3588: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a3588u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a358c: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x3a358cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x3a3590: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3a3590u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a3594: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A3594u;
    {
        const bool branch_taken_0x3a3594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3594u;
        // 0x3a3598: 0x225c3  sra         $a0, $v0, 23 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3594) {
            ctx->pc = 0x3A3600u;
            goto label_3a3600;
        }
    }
    ctx->pc = 0x3A359Cu;
    // 0x3a359c: 0x2483ff82  addiu       $v1, $a0, -0x7E
    ctx->pc = 0x3a359cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967170));
    // 0x3a35a0: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x3a35a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x3a35a4: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x3a35a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x3a35a8: 0xa34821  addu        $t1, $a1, $v1
    ctx->pc = 0x3a35a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3a35ac: 0x1261024  and         $v0, $t1, $a2
    ctx->pc = 0x3a35acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x3a35b0: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x3a35b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x3a35b4: 0x2448ff81  addiu       $t0, $v0, -0x7F
    ctx->pc = 0x3a35b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x3a35b8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x3a35b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x3a35bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a35bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a35c0: 0x1031007  srav        $v0, $v1, $t0
    ctx->pc = 0x3a35c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
    // 0x3a35c4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3a35c4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3a35c8: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x3a35c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x3a35cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a35ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a35d0: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x3a35d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x3a35d4: 0x460c39c1  sub.s       $f7, $f7, $f12
    ctx->pc = 0x3a35d4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[12]);
    // 0x3a35d8: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x3a35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x3a35dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3a35dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3a35e0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x3a35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3a35e4: 0x434807  srav        $t1, $v1, $v0
    ctx->pc = 0x3a35e4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x3a35e8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3a35e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a35ec: 0x46073100  add.s       $f4, $f6, $f7
    ctx->pc = 0x3a35ecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x3a35f0: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x3a35f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3a35f4: 0x91023  negu        $v0, $t1
    ctx->pc = 0x3a35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x3a35f8: 0x44480a  movz        $t1, $v0, $a0
    ctx->pc = 0x3a35f8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
    // 0x3a35fc: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x3a35fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3a3600:
    // 0x3a3600: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3a3600u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3604: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a3604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a3608: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3a3608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x3a360c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a360cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a3610: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3a3610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3614: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x3a3614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x3a3618: 0x34217200  ori         $at, $at, 0x7200
    ctx->pc = 0x3a3618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29184);
    // 0x3a361c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3a361cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a3620: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x3a3620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x3a3624: 0x34217218  ori         $at, $at, 0x7218
    ctx->pc = 0x3a3624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29208);
    // 0x3a3628: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3a3628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a362c: 0x46076041  sub.s       $f1, $f12, $f7
    ctx->pc = 0x3a362cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[7]);
    // 0x3a3630: 0x3c0135bf  lui         $at, 0x35BF
    ctx->pc = 0x3a3630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13759 << 16));
    // 0x3a3634: 0x3421be8c  ori         $at, $at, 0xBE8C
    ctx->pc = 0x3a3634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48780);
    // 0x3a3638: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a3638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a363c: 0x460363c2  mul.s       $f15, $f12, $f3
    ctx->pc = 0x3a363cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x3a3640: 0x3c013331  lui         $at, 0x3331
    ctx->pc = 0x3a3640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13105 << 16));
    // 0x3a3644: 0x3421bb4c  ori         $at, $at, 0xBB4C
    ctx->pc = 0x3a3644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47948);
    // 0x3a3648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a3648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a364c: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x3a364cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x3a3650: 0x3c01b5dd  lui         $at, 0xB5DD
    ctx->pc = 0x3a3650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46557 << 16));
    // 0x3a3654: 0x3421ea0e  ori         $at, $at, 0xEA0E
    ctx->pc = 0x3a3654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59918);
    // 0x3a3658: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3a3658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3a365c: 0x46013041  sub.s       $f1, $f6, $f1
    ctx->pc = 0x3a365cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x3a3660: 0x3c01bb36  lui         $at, 0xBB36
    ctx->pc = 0x3a3660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47926 << 16));
    // 0x3a3664: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x3a3664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x3a3668: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x3a3668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3a366c: 0x3c01388a  lui         $at, 0x388A
    ctx->pc = 0x3a366cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14474 << 16));
    // 0x3a3670: 0x3421b355  ori         $at, $at, 0xB355
    ctx->pc = 0x3a3670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45909);
    // 0x3a3674: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x3a3674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3a3678: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x3a3678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x3a367c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x3a367cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x3a3680: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x3a3680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x3a3684: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3a3684u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3a3688: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3a3688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3a368c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3a368cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a3690: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a3690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a3694: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3a3694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a3698: 0x46020b80  add.s       $f14, $f1, $f2
    ctx->pc = 0x3a3698u;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3a369c: 0x460e7b40  add.s       $f13, $f15, $f14
    ctx->pc = 0x3a369cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x3a36a0: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x3a36a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x3a36a4: 0x460f6841  sub.s       $f1, $f13, $f15
    ctx->pc = 0x3a36a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[15]);
    // 0x3a36a8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3a36a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3a36ac: 0x46017241  sub.s       $f9, $f14, $f1
    ctx->pc = 0x3a36acu;
    ctx->f[9] = FPU_SUB_S(ctx->f[14], ctx->f[1]);
    // 0x3a36b0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3a36b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3a36b4: 0x46096882  mul.s       $f2, $f13, $f9
    ctx->pc = 0x3a36b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[9]);
    // 0x3a36b8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3a36b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3a36bc: 0x46024880  add.s       $f2, $f9, $f2
    ctx->pc = 0x3a36bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[2]);
    // 0x3a36c0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x3a36c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x3a36c4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3a36c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3a36c8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x3a36c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3a36cc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3a36ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3a36d0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x3a36d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x3a36d4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3a36d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3a36d8: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x3a36d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x3a36dc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3a36dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3a36e0: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x3a36e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3a36e4: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x3a36e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x3a36e8: 0x0  nop
    ctx->pc = 0x3a36e8u;
    // NOP
    // 0x3a36ec: 0x0  nop
    ctx->pc = 0x3a36ecu;
    // NOP
    // 0x3a36f0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x3a36f0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x3a36f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a36f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3a36f8: 0x460d0041  sub.s       $f1, $f0, $f13
    ctx->pc = 0x3a36f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x3a36fc: 0x46012341  sub.s       $f13, $f4, $f1
    ctx->pc = 0x3a36fcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x3a3700: 0x44026800  mfc1        $v0, $f13
    ctx->pc = 0x3a3700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a3704: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a3704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3708: 0x915c0  sll         $v0, $t1, 23
    ctx->pc = 0x3a3708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 23));
    // 0x3a370c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3a370cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3a3710: 0x51dc3  sra         $v1, $a1, 23
    ctx->pc = 0x3a3710u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 23));
    // 0x3a3714: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A3714u;
    {
        const bool branch_taken_0x3a3714 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3A3718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3714u;
        // 0x3a3718: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3714) {
            ctx->pc = 0x3A3730u;
            goto label_3a3730;
        }
    }
    ctx->pc = 0x3A371Cu;
    // 0x3a371c: 0xc0e938a  jal         func_3A4E28
    ctx->pc = 0x3A371Cu;
    SET_GPR_U32(ctx, 31, 0x3A3724u);
    ctx->pc = 0x3A3720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A371Cu;
    // 0x3a3720: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E28u, 0x3A371Cu, 0x3A3724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3724u;
label_3a3724:
    // 0x3a3724: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A3724u;
    {
        const bool branch_taken_0x3a3724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3724u;
        // 0x3a3728: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3724) {
            ctx->pc = 0x3A3738u;
            goto label_3a3738;
        }
    }
    ctx->pc = 0x3A372Cu;
    // 0x3a372c: 0x0  nop
    ctx->pc = 0x3a372cu;
    // NOP
label_3a3730:
    // 0x3a3730: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x3a3730u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a3734: 0x0  nop
    ctx->pc = 0x3a3734u;
    // NOP
label_3a3738:
    // 0x3a3738: 0x460da002  mul.s       $f0, $f20, $f13
    ctx->pc = 0x3a3738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
label_3a373c:
    // 0x3a373c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a373cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3a3740:
    // 0x3a3740: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3a3740u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a3744: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3a3744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a3748: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a3748u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a374c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3a374cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a3750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a3750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3754: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x3a3754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a3758: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3a3758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a375c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A375Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A375Cu;
        // 0x3a3760: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A375Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3764u;
    // 0x3a3764: 0x0  nop
    ctx->pc = 0x3a3764u;
    // NOP
    ctx->pc = 0x3a3768u;
}
