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

// Function: func_002C6D48
// Address: 0x2c6d48 - 0x2c70a8
void func_002C6D48_0x2c6d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C6D48_0x2c6d48");
#endif

    switch (ctx->pc) {
        case 0x2c6dc4u: goto label_2c6dc4;
        case 0x2c6de0u: goto label_2c6de0;
        case 0x2c6f5cu: goto label_2c6f5c;
        case 0x2c6fc0u: goto label_2c6fc0;
        case 0x2c6ffcu: goto label_2c6ffc;
        case 0x2c703cu: goto label_2c703c;
        case 0x2c707cu: goto label_2c707c;
        default: break;
    }

    ctx->pc = 0x2c6d48u;

    // 0x2c6d48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c6d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c6d4c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2c6d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2c6d50: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2c6d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2c6d54: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x2c6d54u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2c6d58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c6d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2c6d5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c6d5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c6d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c6d64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c6d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d68: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x2c6d68u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2c6d6c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c6d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d70: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2c6d70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c6d74: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x2c6d74u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x2c6d78: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2c6d78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c6d7c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2c6d7cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2c6d80: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2c6d80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c6d84: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2c6d84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2c6d88: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c6d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2c6d8c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2c6d8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2c6d90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c6d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c6d94: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6D94u;
    {
        const bool branch_taken_0x2c6d94 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D94u;
        // 0x2c6d98: 0x3105ffff  andi        $a1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d94) {
            ctx->pc = 0x2C6DB0u;
            goto label_2c6db0;
        }
    }
    ctx->pc = 0x2C6D9Cu;
    // 0x2c6d9c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2c6d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2c6da0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c6da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6da4: 0x8e042388  lw          $a0, 0x2388($s0)
    ctx->pc = 0x2c6da4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x2c6da8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6DA8u;
    {
        const bool branch_taken_0x2c6da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6DA8u;
        // 0x2c6dac: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6da8) {
            ctx->pc = 0x2C6DBCu;
            goto label_2c6dbc;
        }
    }
    ctx->pc = 0x2C6DB0u;
label_2c6db0:
    // 0x2c6db0: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2c6db0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2c6db4: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x2c6db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2c6db8: 0x8e042388  lw          $a0, 0x2388($s0)
    ctx->pc = 0x2c6db8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
label_2c6dbc:
    // 0x2c6dbc: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x2C6DBCu;
    SET_GPR_U32(ctx, 31, 0x2C6DC4u);
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x2C6DBCu, 0x2C6DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6DC4u;
label_2c6dc4:
    // 0x2c6dc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6dc8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6DC8u;
    {
        const bool branch_taken_0x2c6dc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6DC8u;
        // 0x2c6dcc: 0x26630003  addiu       $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6dc8) {
            ctx->pc = 0x2C6DE8u;
            goto label_2c6de8;
        }
    }
    ctx->pc = 0x2C6DD0u;
    // 0x2c6dd0: 0x8e042388  lw          $a0, 0x2388($s0)
    ctx->pc = 0x2c6dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9096)));
    // 0x2c6dd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c6dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6dd8: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x2C6DD8u;
    SET_GPR_U32(ctx, 31, 0x2C6DE0u);
    ctx->pc = 0x2C6DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6DD8u;
    // 0x2c6ddc: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x2C6DD8u, 0x2C6DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6DE0u;
label_2c6de0:
    // 0x2c6de0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6de4: 0x26630003  addiu       $v1, $s3, 0x3
    ctx->pc = 0x2c6de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_2c6de8:
    // 0x2c6de8: 0x2c62000d  sltiu       $v0, $v1, 0xD
    ctx->pc = 0x2c6de8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x2c6dec: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x2C6DECu;
    {
        const bool branch_taken_0x2c6dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6DECu;
        // 0x2c6df0: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6dec) {
            ctx->pc = 0x2C7044u;
            goto label_2c7044;
        }
    }
    ctx->pc = 0x2C6DF4u;
    // 0x2c6df4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c6df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c6df8: 0x2442c340  addiu       $v0, $v0, -0x3CC0
    ctx->pc = 0x2c6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951744));
    // 0x2c6dfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c6dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c6e00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c6e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c6e04: 0x800008  jr          $a0
    ctx->pc = 0x2C6E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C6E0Cu: goto label_2c6e0c;
            case 0x2C6E20u: goto label_2c6e20;
            case 0x2C6E40u: goto label_2c6e40;
            case 0x2C6E6Cu: goto label_2c6e6c;
            case 0x2C6E98u: goto label_2c6e98;
            case 0x2C6EB8u: goto label_2c6eb8;
            case 0x2C6ED0u: goto label_2c6ed0;
            case 0x2C6EF4u: goto label_2c6ef4;
            case 0x2C6F24u: goto label_2c6f24;
            case 0x2C6F64u: goto label_2c6f64;
            case 0x2C6F88u: goto label_2c6f88;
            case 0x2C6FC8u: goto label_2c6fc8;
            case 0x2C7004u: goto label_2c7004;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6E04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C6E0Cu;
label_2c6e0c:
    // 0x2c6e0c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2c6e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2c6e10: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c6e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c6e14: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x2c6e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x2c6e18: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2C6E18u;
    {
        const bool branch_taken_0x2c6e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E18u;
        // 0x2c6e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e18) {
            ctx->pc = 0x2C6FDCu;
            goto label_2c6fdc;
        }
    }
    ctx->pc = 0x2C6E20u;
label_2c6e20:
    // 0x2c6e20: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c6e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c6e24: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2c6e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2c6e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6e2c: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x2c6e2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2c6e30: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c6e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c6e34: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x2c6e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x2c6e38: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2C6E38u;
    {
        const bool branch_taken_0x2c6e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E38u;
        // 0x2c6e3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e38) {
            ctx->pc = 0x2C7024u;
            goto label_2c7024;
        }
    }
    ctx->pc = 0x2C6E40u;
label_2c6e40:
    // 0x2c6e40: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c6e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c6e44: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2c6e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2c6e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6e4c: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x2c6e4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2c6e50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c6e50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c6e54: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2c6e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2c6e58: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x2c6e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x2c6e5c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c6e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c6e60: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x2c6e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x2c6e64: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2C6E64u;
    {
        const bool branch_taken_0x2c6e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E64u;
        // 0x2c6e68: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e64) {
            ctx->pc = 0x2C6F4Cu;
            goto label_2c6f4c;
        }
    }
    ctx->pc = 0x2C6E6Cu;
label_2c6e6c:
    // 0x2c6e6c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2c6e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2c6e70: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2c6e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2c6e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6e78: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x2c6e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2c6e7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c6e7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c6e80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6e84: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x2c6e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x2c6e88: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c6e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c6e8c: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x2c6e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x2c6e90: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2C6E90u;
    {
        const bool branch_taken_0x2c6e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6E90u;
        // 0x2c6e94: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e90) {
            ctx->pc = 0x2C6F4Cu;
            goto label_2c6f4c;
        }
    }
    ctx->pc = 0x2C6E98u;
label_2c6e98:
    // 0x2c6e98: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c6e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c6e9c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x2c6e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2c6ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ea4: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2c6ea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2c6ea8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c6ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c6eac: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x2c6eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x2c6eb0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2C6EB0u;
    {
        const bool branch_taken_0x2c6eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6EB0u;
        // 0x2c6eb4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6eb0) {
            ctx->pc = 0x2C6FA8u;
            goto label_2c6fa8;
        }
    }
    ctx->pc = 0x2C6EB8u;
label_2c6eb8:
    // 0x2c6eb8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c6eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c6ebc: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2c6ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2c6ec0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c6ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c6ec4: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x2c6ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x2c6ec8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2C6EC8u;
    {
        const bool branch_taken_0x2c6ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6EC8u;
        // 0x2c6ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ec8) {
            ctx->pc = 0x2C6FDCu;
            goto label_2c6fdc;
        }
    }
    ctx->pc = 0x2C6ED0u;
label_2c6ed0:
    // 0x2c6ed0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c6ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c6ed4: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2c6ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2c6ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6edc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c6edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c6ee0: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x2c6ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2c6ee4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2c6ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2c6ee8: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x2c6ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x2c6eec: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2C6EECu;
    {
        const bool branch_taken_0x2c6eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6EECu;
        // 0x2c6ef0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6eec) {
            ctx->pc = 0x2C7024u;
            goto label_2c7024;
        }
    }
    ctx->pc = 0x2C6EF4u;
label_2c6ef4:
    // 0x2c6ef4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2c6ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2c6ef8: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2c6ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2c6efc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f00: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c6f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c6f04: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x2c6f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2c6f08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c6f08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c6f0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6f10: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x2c6f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x2c6f14: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c6f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c6f18: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x2c6f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x2c6f1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C6F1Cu;
    {
        const bool branch_taken_0x2c6f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F1Cu;
        // 0x2c6f20: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6f1c) {
            ctx->pc = 0x2C6F4Cu;
            goto label_2c6f4c;
        }
    }
    ctx->pc = 0x2C6F24u;
label_2c6f24:
    // 0x2c6f24: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2c6f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2c6f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c6f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c6f30: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x2c6f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2c6f34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c6f34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c6f38: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c6f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c6f3c: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x2c6f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x2c6f40: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c6f40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2c6f44: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2c6f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2c6f48: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x2c6f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_2c6f4c:
    // 0x2c6f4c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2c6f4cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x2c6f50: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x2c6f50u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x2c6f54: 0xc0b1954  jal         func_2C6550
    ctx->pc = 0x2C6F54u;
    SET_GPR_U32(ctx, 31, 0x2C6F5Cu);
    ctx->pc = 0x2C6F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6F54u;
    // 0x2c6f58: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6550u, 0x2C6F54u, 0x2C6F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6F5Cu;
label_2c6f5c:
    // 0x2c6f5c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2C6F5Cu;
    {
        const bool branch_taken_0x2c6f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F5Cu;
        // 0x2c6f60: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6f5c) {
            ctx->pc = 0x2C7080u;
            goto label_2c7080;
        }
    }
    ctx->pc = 0x2C6F64u;
label_2c6f64:
    // 0x2c6f64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c6f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c6f68: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x2c6f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2c6f6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f70: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2c6f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2c6f74: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2c6f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2c6f78: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2c6f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2c6f7c: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x2c6f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x2c6f80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C6F80u;
    {
        const bool branch_taken_0x2c6f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F80u;
        // 0x2c6f84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6f80) {
            ctx->pc = 0x2C6FA8u;
            goto label_2c6fa8;
        }
    }
    ctx->pc = 0x2C6F88u;
label_2c6f88:
    // 0x2c6f88: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2c6f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2c6f8c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x2c6f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2c6f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c6f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c6f98: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2c6f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2c6f9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c6f9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c6fa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6fa4: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x2c6fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_2c6fa8:
    // 0x2c6fa8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c6fa8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2c6fac: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2c6facu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x2c6fb0: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x2c6fb0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x2c6fb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c6fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6fb8: 0xc0b1954  jal         func_2C6550
    ctx->pc = 0x2C6FB8u;
    SET_GPR_U32(ctx, 31, 0x2C6FC0u);
    ctx->pc = 0x2C6FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6FB8u;
    // 0x2c6fbc: 0x46008c86  mov.s       $f18, $f17 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6550u, 0x2C6FB8u, 0x2C6FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6FC0u;
label_2c6fc0:
    // 0x2c6fc0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2C6FC0u;
    {
        const bool branch_taken_0x2c6fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6FC0u;
        // 0x2c6fc4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6fc0) {
            ctx->pc = 0x2C7080u;
            goto label_2c7080;
        }
    }
    ctx->pc = 0x2C6FC8u;
label_2c6fc8:
    // 0x2c6fc8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c6fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c6fcc: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2c6fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2c6fd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6fd4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2c6fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2c6fd8: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x2c6fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2c6fdc:
    // 0x2c6fdc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c6fdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c6fe0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c6fe0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2c6fe4: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2c6fe4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x2c6fe8: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x2c6fe8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x2c6fec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c6fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ff0: 0x46008446  mov.s       $f17, $f16
    ctx->pc = 0x2c6ff0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[16]);
    // 0x2c6ff4: 0xc0b1954  jal         func_2C6550
    ctx->pc = 0x2C6FF4u;
    SET_GPR_U32(ctx, 31, 0x2C6FFCu);
    ctx->pc = 0x2C6FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6FF4u;
    // 0x2c6ff8: 0x460094c6  mov.s       $f19, $f18 (Delay Slot)
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6550u, 0x2C6FF4u, 0x2C6FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6FFCu;
label_2c6ffc:
    // 0x2c6ffc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C6FFCu;
    {
        const bool branch_taken_0x2c6ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6FFCu;
        // 0x2c7000: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ffc) {
            ctx->pc = 0x2C7080u;
            goto label_2c7080;
        }
    }
    ctx->pc = 0x2C7004u;
label_2c7004:
    // 0x2c7004: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2c7004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2c7008: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2c7008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2c700c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c700cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7010: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c7010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c7014: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x2c7014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2c7018: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c7018u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c701c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c701cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c7020: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x2c7020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_2c7024:
    // 0x2c7024: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c7024u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2c7028: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2c7028u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x2c702c: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x2c702cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x2c7030: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c7030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7034: 0xc0b1954  jal         func_2C6550
    ctx->pc = 0x2C7034u;
    SET_GPR_U32(ctx, 31, 0x2C703Cu);
    ctx->pc = 0x2C7038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7034u;
    // 0x2c7038: 0x460084c6  mov.s       $f19, $f16 (Delay Slot)
    ctx->f[19] = FPU_MOV_S(ctx->f[16]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6550u, 0x2C7034u, 0x2C703Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C703Cu;
label_2c703c:
    // 0x2c703c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C703Cu;
    {
        const bool branch_taken_0x2c703c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C703Cu;
        // 0x2c7040: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c703c) {
            ctx->pc = 0x2C7080u;
            goto label_2c7080;
        }
    }
    ctx->pc = 0x2C7044u;
label_2c7044:
    // 0x2c7044: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2c7044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2c7048: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2c7048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2c704c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c704cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7050: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c7050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c7054: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x2c7054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2c7058: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c7058u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c705c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c705cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c7060: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x2c7060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x2c7064: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c7064u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2c7068: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2c7068u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x2c706c: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x2c706cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x2c7070: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2c7070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7074: 0xc0b1954  jal         func_2C6550
    ctx->pc = 0x2C7074u;
    SET_GPR_U32(ctx, 31, 0x2C707Cu);
    ctx->pc = 0x2C7078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7074u;
    // 0x2c7078: 0x460084c6  mov.s       $f19, $f16 (Delay Slot)
    ctx->f[19] = FPU_MOV_S(ctx->f[16]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6550u, 0x2C7074u, 0x2C707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C707Cu;
label_2c707c:
    // 0x2c707c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c707cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c7080:
    // 0x2c7080: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c7080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7084: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c7084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7088: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2c7088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c708c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c708cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7090: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x2c7090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2c7094: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x2c7094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c7098: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2c7098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c709c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2c709cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c70a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C70A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C70A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C70A0u;
        // 0x2c70a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C70A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C70A8u;
}
