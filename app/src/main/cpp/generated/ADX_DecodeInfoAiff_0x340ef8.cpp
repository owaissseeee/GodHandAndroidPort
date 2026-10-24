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

// Function: ADX_DecodeInfoAiff
// Address: 0x340ef8 - 0x341008
void ADX_DecodeInfoAiff_0x340ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADX_DecodeInfoAiff_0x340ef8");
#endif

    switch (ctx->pc) {
        case 0x340f68u: goto label_340f68;
        default: break;
    }

    ctx->pc = 0x340ef8u;

    // 0x340ef8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x340ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x340efc: 0x28a21000  slti        $v0, $a1, 0x1000
    ctx->pc = 0x340efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x340f00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x340f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x340f04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340f08: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x340f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x340f0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x340f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340f10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x340f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x340f14: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x340f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340f18: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x340f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x340f1c: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x340f1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340f20: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x340f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x340f24: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x340f24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340f28: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x340f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x340f2c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x340f2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340f30: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x340f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x340f34: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x340f34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340f38: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x340f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x340f3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x340f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340f40: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x340f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x340f44: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x340f44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x340f48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x340F48u;
    {
        const bool branch_taken_0x340f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F48u;
        // 0x340f4c: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f48) {
            ctx->pc = 0x340F60u;
            goto label_340f60;
        }
    }
    ctx->pc = 0x340F50u;
    // 0x340f50: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x340f50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x340f54: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x340F54u;
    {
        const bool branch_taken_0x340f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F54u;
        // 0x340f58: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f54) {
            ctx->pc = 0x340FE0u;
            goto label_340fe0;
        }
    }
    ctx->pc = 0x340F5Cu;
    // 0x340f5c: 0x0  nop
    ctx->pc = 0x340f5cu;
    // NOP
label_340f60:
    // 0x340f60: 0xc0d02c0  jal         func_340B00
    ctx->pc = 0x340F60u;
    SET_GPR_U32(ctx, 31, 0x340F68u);
    ctx->pc = 0x340B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340B00u, 0x340F60u, 0x340F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340F68u;
label_340f68:
    // 0x340f68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x340f68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340f6c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x340F6Cu;
    {
        const bool branch_taken_0x340f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x340F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F6Cu;
        // 0x340f70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f6c) {
            ctx->pc = 0x340FE0u;
            goto label_340fe0;
        }
    }
    ctx->pc = 0x340F74u;
    // 0x340f74: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x340f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x340f78: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x340f78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x340f7c: 0x18800018  blez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x340F7Cu;
    {
        const bool branch_taken_0x340f7c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x340F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340F7Cu;
        // 0x340f80: 0xa6230000  sh          $v1, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340f7c) {
            ctx->pc = 0x340FE0u;
            goto label_340fe0;
        }
    }
    ctx->pc = 0x340F84u;
    // 0x340f84: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x340f84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x340f88: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x340f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x340f8c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x340f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340f90: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x340f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340f94: 0x93a40008  lbu         $a0, 0x8($sp)
    ctx->pc = 0x340f94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x340f98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x340f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340f9c: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x340f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x340fa0: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x340fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x340fa4: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x340fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x340fa8: 0xa2840000  sb          $a0, 0x0($s4)
    ctx->pc = 0x340fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x340fac: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x340facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x340fb0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x340fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x340fb4: 0xa2a70000  sb          $a3, 0x0($s5)
    ctx->pc = 0x340fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x340fb8: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x340fb8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x340fbc: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x340fbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x340fc0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x340fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x340fc4: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x340fc4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x340fc8: 0x24650007  addiu       $a1, $v1, 0x7
    ctx->pc = 0x340fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x340fcc: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x340fccu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x340fd0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x340fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x340fd4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x340fd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x340fd8: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x340fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x340fdc: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x340fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_340fe0:
    // 0x340fe0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x340fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340fe4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x340fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x340fe8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x340fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340fec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x340fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340ff0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x340ff0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x340ff4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x340ff4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340ff8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x340ff8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x340ffc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x340ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x341000: 0x3e00008  jr          $ra
    ctx->pc = 0x341000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341000u;
        // 0x341004: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341008u;
}
