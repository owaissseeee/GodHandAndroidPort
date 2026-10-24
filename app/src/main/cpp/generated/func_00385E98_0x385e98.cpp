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

// Function: func_00385E98
// Address: 0x385e98 - 0x3863b8
void func_00385E98_0x385e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00385E98_0x385e98");
#endif

    switch (ctx->pc) {
        case 0x385ee4u: goto label_385ee4;
        case 0x385f40u: goto label_385f40;
        case 0x385f70u: goto label_385f70;
        case 0x385fb8u: goto label_385fb8;
        case 0x385fd8u: goto label_385fd8;
        case 0x385ffcu: goto label_385ffc;
        case 0x386018u: goto label_386018;
        case 0x386058u: goto label_386058;
        case 0x3860a0u: goto label_3860a0;
        case 0x3860e8u: goto label_3860e8;
        case 0x38614cu: goto label_38614c;
        case 0x386188u: goto label_386188;
        case 0x3861b8u: goto label_3861b8;
        case 0x3861f0u: goto label_3861f0;
        case 0x386250u: goto label_386250;
        case 0x3862a0u: goto label_3862a0;
        case 0x3862d8u: goto label_3862d8;
        case 0x38635cu: goto label_38635c;
        default: break;
    }

    ctx->pc = 0x385e98u;

    // 0x385e98: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x385e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x385e9c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x385e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x385ea0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x385ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x385ea4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x385ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x385ea8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x385ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385eac: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x385eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x385eb0: 0x2444b168  addiu       $a0, $v0, -0x4E98
    ctx->pc = 0x385eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947176));
    // 0x385eb4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x385eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x385eb8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x385eb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385ebc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x385ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x385ec0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x385ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x385ec4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x385ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x385ec8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x385ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x385ecc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x385eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x385ed0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x385ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3BB174u));
    // 0x385ed4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x385ED4u;
    {
        const bool branch_taken_0x385ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x385ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385ED4u;
        // 0x385ed8: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385ed4) {
            ctx->pc = 0x385EECu;
            goto label_385eec;
        }
    }
    ctx->pc = 0x385EDCu;
    // 0x385edc: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x385EDCu;
    SET_GPR_U32(ctx, 31, 0x385EE4u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x385EDCu, 0x385EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385EE4u;
label_385ee4:
    // 0x385ee4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x385EE4u;
    {
        const bool branch_taken_0x385ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385EE4u;
        // 0x385ee8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385ee4) {
            ctx->pc = 0x385EFCu;
            goto label_385efc;
        }
    }
    ctx->pc = 0x385EECu;
label_385eec:
    // 0x385eec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x385eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x385ef0: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x385ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x385ef4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x385ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x385ef8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x385ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_385efc:
    // 0x385efc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x385efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x385f00: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x385f00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x385f04: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x385f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x385f08: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x385f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x385f0c: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x385f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x385f10: 0x410c3  sra         $v0, $a0, 3
    ctx->pc = 0x385f10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 3));
    // 0x385f14: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x385F14u;
    {
        const bool branch_taken_0x385f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F14u;
        // 0x385f18: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f14) {
            ctx->pc = 0x385FB0u;
            goto label_385fb0;
        }
    }
    ctx->pc = 0x385F1Cu;
    // 0x385f1c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x385f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385f20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x385f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385f24: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x385f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x385f28: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x385F28u;
    {
        const bool branch_taken_0x385f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F28u;
        // 0x385f2c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f28) {
            ctx->pc = 0x385FA4u;
            goto label_385fa4;
        }
    }
    ctx->pc = 0x385F30u;
    // 0x385f30: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x385f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x385f34: 0x24564030  addiu       $s6, $v0, 0x4030
    ctx->pc = 0x385f34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16432));
    // 0x385f38: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x385f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x385f3c: 0x0  nop
    ctx->pc = 0x385f3cu;
    // NOP
label_385f40:
    // 0x385f40: 0x24a4fff0  addiu       $a0, $a1, -0x10
    ctx->pc = 0x385f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x385f44: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x385f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x385f48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x385f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x385f4c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x385F4Cu;
    {
        const bool branch_taken_0x385f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F4Cu;
        // 0x385f50: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f4c) {
            ctx->pc = 0x385F94u;
            goto label_385f94;
        }
    }
    ctx->pc = 0x385F54u;
    // 0x385f54: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x385f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x385f58: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x385f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x385f5c: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x385f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x385f60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x385F60u;
    {
        const bool branch_taken_0x385f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F60u;
        // 0x385f64: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f60) {
            ctx->pc = 0x385F78u;
            goto label_385f78;
        }
    }
    ctx->pc = 0x385F68u;
    // 0x385f68: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x385F68u;
    SET_GPR_U32(ctx, 31, 0x385F70u);
    ctx->pc = 0x385F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385F68u;
    // 0x385f6c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x385F68u, 0x385F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385F70u;
label_385f70:
    // 0x385f70: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x385F70u;
    {
        const bool branch_taken_0x385f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F70u;
        // 0x385f74: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f70) {
            ctx->pc = 0x385F9Cu;
            goto label_385f9c;
        }
    }
    ctx->pc = 0x385F78u;
label_385f78:
    // 0x385f78: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x385f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x385f7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x385f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x385f80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x385f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x385f84: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x385f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x385f88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x385f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x385f8c: 0xaca3fff0  sw          $v1, -0x10($a1)
    ctx->pc = 0x385f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 3));
    // 0x385f90: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x385f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_385f94:
    // 0x385f94: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x385f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x385f98: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x385f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_385f9c:
    // 0x385f9c: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x385F9Cu;
    {
        const bool branch_taken_0x385f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x385f9c) {
            ctx->pc = 0x385FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385F9Cu;
            // 0x385fa0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_385f40;
        }
    }
    ctx->pc = 0x385FA4u;
label_385fa4:
    // 0x385fa4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x385fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x385fa8: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x385fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x385fac: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x385facu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_385fb0:
    // 0x385fb0: 0xc0e1990  jal         func_386640
    ctx->pc = 0x385FB0u;
    SET_GPR_U32(ctx, 31, 0x385FB8u);
    ctx->pc = 0x385FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385FB0u;
    // 0x385fb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386640u, 0x385FB0u, 0x385FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385FB8u;
label_385fb8:
    // 0x385fb8: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x385FB8u;
    {
        const bool branch_taken_0x385fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385FB8u;
        // 0x385fbc: 0x26e4b168  addiu       $a0, $s7, -0x4E98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294947176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385fb8) {
            ctx->pc = 0x386188u;
            goto label_386188;
        }
    }
    ctx->pc = 0x385FC0u;
    // 0x385fc0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x385fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x385fc4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x385fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x385fc8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x385FC8u;
    {
        const bool branch_taken_0x385fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x385FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385FC8u;
        // 0x385fcc: 0x2450d000  addiu       $s0, $v0, -0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385fc8) {
            ctx->pc = 0x385FE0u;
            goto label_385fe0;
        }
    }
    ctx->pc = 0x385FD0u;
    // 0x385fd0: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x385FD0u;
    SET_GPR_U32(ctx, 31, 0x385FD8u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x385FD0u, 0x385FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385FD8u;
label_385fd8:
    // 0x385fd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x385FD8u;
    {
        const bool branch_taken_0x385fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385FD8u;
        // 0x385fdc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385fd8) {
            ctx->pc = 0x385FF0u;
            goto label_385ff0;
        }
    }
    ctx->pc = 0x385FE0u;
label_385fe0:
    // 0x385fe0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x385fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x385fe4: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x385fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x385fe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x385fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x385fec: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x385fecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_385ff0:
    // 0x385ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385ff4: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x385FF4u;
    SET_GPR_U32(ctx, 31, 0x385FFCu);
    ctx->pc = 0x385FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385FF4u;
    // 0x385ff8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x385FF4u, 0x385FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385FFCu;
label_385ffc:
    // 0x385ffc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x385ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x386000: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x386000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386004: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x386004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386008: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x386008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38600c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38600cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386010: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x386010u;
    SET_GPR_U32(ctx, 31, 0x386018u);
    ctx->pc = 0x386014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386010u;
    // 0x386014: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x386010u, 0x386018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386018u;
label_386018:
    // 0x386018: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x386018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38601c: 0x105d0025  beq         $v0, $sp, . + 4 + (0x25 << 2)
    ctx->pc = 0x38601Cu;
    {
        const bool branch_taken_0x38601c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x386020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38601Cu;
        // 0x386020: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38601c) {
            ctx->pc = 0x3860B4u;
            goto label_3860b4;
        }
    }
    ctx->pc = 0x386024u;
    // 0x386024: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x386024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386028: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x386028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x38602c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x38602cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x386030: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386034: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x386034u;
    {
        const bool branch_taken_0x386034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386034u;
        // 0x386038: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386034) {
            ctx->pc = 0x386084u;
            goto label_386084;
        }
    }
    ctx->pc = 0x38603Cu;
    // 0x38603c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x38603cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x386040: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x386040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x386044: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x386044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x386048: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x386048u;
    {
        const bool branch_taken_0x386048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386048u;
        // 0x38604c: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386048) {
            ctx->pc = 0x386060u;
            goto label_386060;
        }
    }
    ctx->pc = 0x386050u;
    // 0x386050: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x386050u;
    SET_GPR_U32(ctx, 31, 0x386058u);
    ctx->pc = 0x386054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386050u;
    // 0x386054: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x386050u, 0x386058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386058u;
label_386058:
    // 0x386058: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x386058u;
    {
        const bool branch_taken_0x386058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386058u;
        // 0x38605c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386058) {
            ctx->pc = 0x386088u;
            goto label_386088;
        }
    }
    ctx->pc = 0x386060u;
label_386060:
    // 0x386060: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x386060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x386064: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x386064u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x386068: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x386068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x38606c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x386070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x386074: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x386074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x386078: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x386078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38607c: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x38607cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x386080: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x386080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_386084:
    // 0x386084: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x386084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_386088:
    // 0x386088: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x386088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x38608c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x38608cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x386090: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x386090u;
    {
        const bool branch_taken_0x386090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x386090) {
            ctx->pc = 0x386094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386090u;
            // 0x386094: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3860A8u;
            goto label_3860a8;
        }
    }
    ctx->pc = 0x386098u;
    // 0x386098: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x386098u;
    SET_GPR_U32(ctx, 31, 0x3860A0u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x386098u, 0x3860A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3860A0u;
label_3860a0:
    // 0x3860a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3860A0u;
    {
        const bool branch_taken_0x3860a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3860A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860A0u;
        // 0x3860a4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3860a0) {
            ctx->pc = 0x3860B0u;
            goto label_3860b0;
        }
    }
    ctx->pc = 0x3860A8u;
label_3860a8:
    // 0x3860a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3860a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3860ac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3860acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3860b0:
    // 0x3860b0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3860b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3860b4:
    // 0x3860b4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x3860b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3860b8: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x3860b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x3860bc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3860bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3860c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3860c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3860c4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3860C4u;
    {
        const bool branch_taken_0x3860c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3860C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860C4u;
        // 0x3860c8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3860c4) {
            ctx->pc = 0x386114u;
            goto label_386114;
        }
    }
    ctx->pc = 0x3860CCu;
    // 0x3860cc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3860ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3860d0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3860d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3860d4: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3860d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3860d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3860D8u;
    {
        const bool branch_taken_0x3860d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3860DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860D8u;
        // 0x3860dc: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3860d8) {
            ctx->pc = 0x3860F0u;
            goto label_3860f0;
        }
    }
    ctx->pc = 0x3860E0u;
    // 0x3860e0: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x3860E0u;
    SET_GPR_U32(ctx, 31, 0x3860E8u);
    ctx->pc = 0x3860E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3860E0u;
    // 0x3860e4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x3860E0u, 0x3860E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3860E8u;
label_3860e8:
    // 0x3860e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3860E8u;
    {
        const bool branch_taken_0x3860e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3860ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860E8u;
        // 0x3860ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3860e8) {
            ctx->pc = 0x386118u;
            goto label_386118;
        }
    }
    ctx->pc = 0x3860F0u;
label_3860f0:
    // 0x3860f0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x3860f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x3860f4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3860f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3860f8: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x3860f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x3860fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3860fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386100: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x386100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x386104: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x386104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x386108: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x386108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38610c: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x38610cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x386110: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x386110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_386114:
    // 0x386114: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x386114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_386118:
    // 0x386118: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x386118u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x38611c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x38611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x386120: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x386120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386124: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x386124u;
    {
        const bool branch_taken_0x386124 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x386128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386124u;
        // 0x386128: 0xa3a30004  sb          $v1, 0x4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386124) {
            ctx->pc = 0x386178u;
            goto label_386178;
        }
    }
    ctx->pc = 0x38612Cu;
    // 0x38612c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x38612Cu;
    {
        const bool branch_taken_0x38612c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38612Cu;
        // 0x386130: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38612c) {
            ctx->pc = 0x386168u;
            goto label_386168;
        }
    }
    ctx->pc = 0x386134u;
    // 0x386134: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x386134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x386138: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x386138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38613c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x38613Cu;
    {
        const bool branch_taken_0x38613c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38613c) {
            ctx->pc = 0x386140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38613Cu;
            // 0x386140: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386154u;
            goto label_386154;
        }
    }
    ctx->pc = 0x386144u;
    // 0x386144: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x386144u;
    SET_GPR_U32(ctx, 31, 0x38614Cu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x386144u, 0x38614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38614Cu;
label_38614c:
    // 0x38614c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38614Cu;
    {
        const bool branch_taken_0x38614c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38614Cu;
        // 0x386150: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38614c) {
            ctx->pc = 0x38615Cu;
            goto label_38615c;
        }
    }
    ctx->pc = 0x386154u;
label_386154:
    // 0x386154: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x386154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x386158: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x386158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_38615c:
    // 0x38615c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38615cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x386160: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x386160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x386164: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x386164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_386168:
    // 0x386168: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x386168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x38616c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x38616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x386170: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x386170u;
    {
        const bool branch_taken_0x386170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386170u;
        // 0x386174: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386170) {
            ctx->pc = 0x386188u;
            goto label_386188;
        }
    }
    ctx->pc = 0x386178u;
label_386178:
    // 0x386178: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x386178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38617c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38617cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386180: 0xc0eee84  jal         func_3BBA10
    ctx->pc = 0x386180u;
    SET_GPR_U32(ctx, 31, 0x386188u);
    ctx->pc = 0x386184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386180u;
    // 0x386184: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBA10u, 0x386180u, 0x386188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386188u;
label_386188:
    // 0x386188: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x386188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38618c: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x38618cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x386190: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x386190u;
    {
        const bool branch_taken_0x386190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386190u;
        // 0x386194: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386190) {
            ctx->pc = 0x3861A4u;
            goto label_3861a4;
        }
    }
    ctx->pc = 0x386198u;
    // 0x386198: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x386198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x38619c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38619Cu;
    {
        const bool branch_taken_0x38619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3861A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38619Cu;
        // 0x3861a0: 0x2445d008  addiu       $a1, $v0, -0x2FF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38619c) {
            ctx->pc = 0x3861ACu;
            goto label_3861ac;
        }
    }
    ctx->pc = 0x3861A4u;
label_3861a4:
    // 0x3861a4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x3861a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3861a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3861a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3861ac:
    // 0x3861ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3861acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3861b0: 0xc0e19c0  jal         func_386700
    ctx->pc = 0x3861B0u;
    SET_GPR_U32(ctx, 31, 0x3861B8u);
    ctx->pc = 0x3861B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3861B0u;
    // 0x3861b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386700u, 0x3861B0u, 0x3861B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3861B8u;
label_3861b8:
    // 0x3861b8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3861B8u;
    {
        const bool branch_taken_0x3861b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3861BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861B8u;
        // 0x3861bc: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3861b8) {
            ctx->pc = 0x386220u;
            goto label_386220;
        }
    }
    ctx->pc = 0x3861C0u;
    // 0x3861c0: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x3861c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x3861c4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3861c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3861c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3861c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3861cc: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x3861CCu;
    {
        const bool branch_taken_0x3861cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3861D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861CCu;
        // 0x3861d0: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3861cc) {
            ctx->pc = 0x3862FCu;
            goto label_3862fc;
        }
    }
    ctx->pc = 0x3861D4u;
    // 0x3861d4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3861d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3861d8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3861d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3861dc: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3861dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3861e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3861E0u;
    {
        const bool branch_taken_0x3861e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3861E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861E0u;
        // 0x3861e4: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3861e0) {
            ctx->pc = 0x3861F8u;
            goto label_3861f8;
        }
    }
    ctx->pc = 0x3861E8u;
    // 0x3861e8: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x3861E8u;
    SET_GPR_U32(ctx, 31, 0x3861F0u);
    ctx->pc = 0x3861ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3861E8u;
    // 0x3861ec: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x3861E8u, 0x3861F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3861F0u;
label_3861f0:
    // 0x3861f0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x3861F0u;
    {
        const bool branch_taken_0x3861f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3861F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861F0u;
        // 0x3861f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3861f0) {
            ctx->pc = 0x38638Cu;
            goto label_38638c;
        }
    }
    ctx->pc = 0x3861F8u;
label_3861f8:
    // 0x3861f8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x3861f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x3861fc: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3861fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x386200: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x386200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x386204: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386208: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x386208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x38620c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x38620cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x386210: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x386210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x386214: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x386214u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x386218: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x386218u;
    {
        const bool branch_taken_0x386218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386218u;
        // 0x38621c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386218) {
            ctx->pc = 0x3862FCu;
            goto label_3862fc;
        }
    }
    ctx->pc = 0x386220u;
label_386220:
    // 0x386220: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x386220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x386224: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x386224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x386228: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x386228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x38622c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x38622cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386230: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x386230u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x386234: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x386234u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x386238: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x386238u;
    {
        const bool branch_taken_0x386238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386238u;
        // 0x38623c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386238) {
            ctx->pc = 0x386328u;
            goto label_386328;
        }
    }
    ctx->pc = 0x386240u;
    // 0x386240: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x386240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x386244: 0x3c120046  lui         $s2, 0x46
    ctx->pc = 0x386244u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
    // 0x386248: 0x24544030  addiu       $s4, $v0, 0x4030
    ctx->pc = 0x386248u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16432));
    // 0x38624c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38624cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_386250:
    // 0x386250: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x386250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x386254: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x386254u;
    {
        const bool branch_taken_0x386254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386254u;
        // 0x386258: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386254) {
            ctx->pc = 0x386264u;
            goto label_386264;
        }
    }
    ctx->pc = 0x38625Cu;
    // 0x38625c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38625Cu;
    {
        const bool branch_taken_0x38625c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38625Cu;
        // 0x386260: 0x2645d008  addiu       $a1, $s2, -0x2FF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38625c) {
            ctx->pc = 0x38626Cu;
            goto label_38626c;
        }
    }
    ctx->pc = 0x386264u;
label_386264:
    // 0x386264: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x386264u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x386268: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x386268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38626c:
    // 0x38626c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x38626cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x386270: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x386270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x386274: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x386274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x386278: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x386278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38627c: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x38627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x386280: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x386280u;
    {
        const bool branch_taken_0x386280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386280u;
        // 0x386284: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386280) {
            ctx->pc = 0x386290u;
            goto label_386290;
        }
    }
    ctx->pc = 0x386288u;
    // 0x386288: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x386288u;
    {
        const bool branch_taken_0x386288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386288u;
        // 0x38628c: 0x2646d008  addiu       $a2, $s2, -0x2FF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386288) {
            ctx->pc = 0x386298u;
            goto label_386298;
        }
    }
    ctx->pc = 0x386290u;
label_386290:
    // 0x386290: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x386290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x386294: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x386294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_386298:
    // 0x386298: 0xc0e19c0  jal         func_386700
    ctx->pc = 0x386298u;
    SET_GPR_U32(ctx, 31, 0x3862A0u);
    ctx->pc = 0x38629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386298u;
    // 0x38629c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386700u, 0x386298u, 0x3862A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3862A0u;
label_3862a0:
    // 0x3862a0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3862A0u;
    {
        const bool branch_taken_0x3862a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3862A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862A0u;
        // 0x3862a4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3862a0) {
            ctx->pc = 0x386304u;
            goto label_386304;
        }
    }
    ctx->pc = 0x3862A8u;
    // 0x3862a8: 0x24a4fff0  addiu       $a0, $a1, -0x10
    ctx->pc = 0x3862a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x3862ac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3862acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3862b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3862b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3862b4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3862B4u;
    {
        const bool branch_taken_0x3862b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3862B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862B4u;
        // 0x3862b8: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3862b4) {
            ctx->pc = 0x3862FCu;
            goto label_3862fc;
        }
    }
    ctx->pc = 0x3862BCu;
    // 0x3862bc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3862bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3862c0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3862c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3862c4: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x3862c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3862c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3862C8u;
    {
        const bool branch_taken_0x3862c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3862CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862C8u;
        // 0x3862cc: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3862c8) {
            ctx->pc = 0x3862E0u;
            goto label_3862e0;
        }
    }
    ctx->pc = 0x3862D0u;
    // 0x3862d0: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x3862D0u;
    SET_GPR_U32(ctx, 31, 0x3862D8u);
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x3862D0u, 0x3862D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3862D8u;
label_3862d8:
    // 0x3862d8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3862D8u;
    {
        const bool branch_taken_0x3862d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3862DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862D8u;
        // 0x3862dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3862d8) {
            ctx->pc = 0x38638Cu;
            goto label_38638c;
        }
    }
    ctx->pc = 0x3862E0u;
label_3862e0:
    // 0x3862e0: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3862e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3862e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3862e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3862e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3862e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3862ec: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3862ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3862f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3862f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3862f4: 0xaca3fff0  sw          $v1, -0x10($a1)
    ctx->pc = 0x3862f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 3));
    // 0x3862f8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3862f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3862fc:
    // 0x3862fc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3862FCu;
    {
        const bool branch_taken_0x3862fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3862FCu;
        // 0x386300: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3862fc) {
            ctx->pc = 0x38638Cu;
            goto label_38638c;
        }
    }
    ctx->pc = 0x386304u;
label_386304:
    // 0x386304: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x386304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x386308: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x386308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x38630c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x38630cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x386310: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x386310u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x386314: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x386314u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x386318: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x386318u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x38631c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x38631cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x386320: 0x5440ffcb  bnel        $v0, $zero, . + 4 + (-0x35 << 2)
    ctx->pc = 0x386320u;
    {
        const bool branch_taken_0x386320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x386320) {
            ctx->pc = 0x386324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386320u;
            // 0x386324: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386250;
        }
    }
    ctx->pc = 0x386328u;
label_386328:
    // 0x386328: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x386328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38632c: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x38632cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x386330: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x386330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x386334: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386338: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x386338u;
    {
        const bool branch_taken_0x386338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386338u;
        // 0x38633c: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386338) {
            ctx->pc = 0x386388u;
            goto label_386388;
        }
    }
    ctx->pc = 0x386340u;
    // 0x386340: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x386340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x386344: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x386344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x386348: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x386348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x38634c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38634Cu;
    {
        const bool branch_taken_0x38634c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38634Cu;
        // 0x386350: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38634c) {
            ctx->pc = 0x386364u;
            goto label_386364;
        }
    }
    ctx->pc = 0x386354u;
    // 0x386354: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x386354u;
    SET_GPR_U32(ctx, 31, 0x38635Cu);
    ctx->pc = 0x386358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386354u;
    // 0x386358: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x386354u, 0x38635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38635Cu;
label_38635c:
    // 0x38635c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x38635Cu;
    {
        const bool branch_taken_0x38635c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38635Cu;
        // 0x386360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38635c) {
            ctx->pc = 0x38638Cu;
            goto label_38638c;
        }
    }
    ctx->pc = 0x386364u;
label_386364:
    // 0x386364: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x386364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x386368: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x386368u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x38636c: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x38636cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x386370: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386374: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x386374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x386378: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x386378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x38637c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38637cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x386380: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x386380u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x386384: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x386384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_386388:
    // 0x386388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x386388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38638c:
    // 0x38638c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x38638cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x386390: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x386390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x386394: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x386394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x386398: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x386398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38639c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x38639cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3863a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3863a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3863a4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3863a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3863a8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3863a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3863ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3863acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3863b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3863B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3863B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3863B0u;
        // 0x3863b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3863B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3863B8u;
}
