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

// Function: func_00342D00
// Address: 0x342d00 - 0x342e00
void func_00342D00_0x342d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00342D00_0x342d00");
#endif

    switch (ctx->pc) {
        case 0x342d58u: goto label_342d58;
        case 0x342d60u: goto label_342d60;
        default: break;
    }

    ctx->pc = 0x342d00u;

    // 0x342d00: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x342d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x342d04: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x342d04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x342d08: 0x8c43c7d0  lw          $v1, -0x3830($v0)
    ctx->pc = 0x342d08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EC7D0u));
    // 0x342d0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x342d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x342d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x342d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d14: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x342d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x342d18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x342d18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d1c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x342d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x342d20: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x342d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d24: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x342d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x342d28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x342d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d2c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x342d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x342d30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x342D30u;
    {
        const bool branch_taken_0x342d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x342D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D30u;
        // 0x342d34: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342d30) {
            ctx->pc = 0x342D48u;
            goto label_342d48;
        }
    }
    ctx->pc = 0x342D38u;
    // 0x342d38: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x342d38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x342d3c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x342D3Cu;
    {
        const bool branch_taken_0x342d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D3Cu;
        // 0x342d40: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342d3c) {
            ctx->pc = 0x342DE4u;
            goto label_342de4;
        }
    }
    ctx->pc = 0x342D44u;
    // 0x342d44: 0x0  nop
    ctx->pc = 0x342d44u;
    // NOP
label_342d48:
    // 0x342d48: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x342d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x342d4c: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x342d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x342d50: 0xc0d0b2c  jal         func_342CB0
    ctx->pc = 0x342D50u;
    SET_GPR_U32(ctx, 31, 0x342D58u);
    ctx->pc = 0x342D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342D50u;
    // 0x342d54: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CB0u, 0x342D50u, 0x342D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342D58u;
label_342d58:
    // 0x342d58: 0xc0d0b80  jal         func_342E00
    ctx->pc = 0x342D58u;
    SET_GPR_U32(ctx, 31, 0x342D60u);
    ctx->pc = 0x342D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342D58u;
    // 0x342d5c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E00u, 0x342D58u, 0x342D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342D60u;
label_342d60:
    // 0x342d60: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x342d60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x342d64: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x342d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342d68: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x342d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x342d6c: 0x24a7000f  addiu       $a3, $a1, 0xF
    ctx->pc = 0x342d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x342d70: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x342d70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x342d74: 0xa44018  mult        $t0, $a1, $a0
    ctx->pc = 0x342d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x342d78: 0xe3280b  movn        $a1, $a3, $v1
    ctx->pc = 0x342d78u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x342d7c: 0x2486000f  addiu       $a2, $a0, 0xF
    ctx->pc = 0x342d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x342d80: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x342d80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x342d84: 0xc3200b  movn        $a0, $a2, $v1
    ctx->pc = 0x342d84u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x342d88: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x342d88u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x342d8c: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x342d8cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x342d90: 0xa43818  mult        $a3, $a1, $a0
    ctx->pc = 0x342d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x342d94: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x342d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x342d98: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x342d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x342d9c: 0x337c2  srl         $a2, $v1, 31
    ctx->pc = 0x342d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x342da0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x342da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x342da4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x342da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342da8: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x342da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x342dac: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x342dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x342db0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x342db0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x342db4: 0x52a80  sll         $a1, $a1, 10
    ctx->pc = 0x342db4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x342db8: 0x3c010008  lui         $at, 0x8
    ctx->pc = 0x342db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8 << 16));
    // 0x342dbc: 0x34216910  ori         $at, $at, 0x6910
    ctx->pc = 0x342dbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26896);
    // 0x342dc0: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x342dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x342dc4: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x342dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x342dc8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x342dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x342dcc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x342dccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x342dd0: 0x2251818  mult        $v1, $s1, $a1
    ctx->pc = 0x342dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x342dd4: 0x10490002  beq         $v0, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x342DD4u;
    {
        const bool branch_taken_0x342dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x342DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DD4u;
        // 0x342dd8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342dd4) {
            ctx->pc = 0x342DE0u;
            goto label_342de0;
        }
    }
    ctx->pc = 0x342DDCu;
    // 0x342ddc: 0x2241818  mult        $v1, $s1, $a0
    ctx->pc = 0x342ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_342de0:
    // 0x342de0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x342de0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_342de4:
    // 0x342de4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x342de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342de8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x342de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x342dec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x342decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x342df0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x342df0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x342df4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x342df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x342df8: 0x3e00008  jr          $ra
    ctx->pc = 0x342DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342DF8u;
        // 0x342dfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342E00u;
}
