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

// Function: mwsfcre_CalcWorkStmBuf
// Address: 0x342bc8 - 0x342cb0
void mwsfcre_CalcWorkStmBuf_0x342bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mwsfcre_CalcWorkStmBuf_0x342bc8");
#endif

    ctx->pc = 0x342bc8u;

    // 0x342bc8: 0x8c8d0014  lw          $t5, 0x14($a0)
    ctx->pc = 0x342bc8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x342bcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x342bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x342bd0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x342bd0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x342bd4: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x342bd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x342bd8: 0xd102a  slt         $v0, $zero, $t5
    ctx->pc = 0x342bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x342bdc: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x342bdcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342be0: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x342be0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342be4: 0x62680a  movz        $t5, $v1, $v0
    ctx->pc = 0x342be4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
    // 0x342be8: 0xe0c82d  daddu       $t9, $a3, $zero
    ctx->pc = 0x342be8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342bec: 0x15cb000c  bne         $t6, $t3, . + 4 + (0xC << 2)
    ctx->pc = 0x342BECu;
    {
        const bool branch_taken_0x342bec = (GPR_U64(ctx, 14) != GPR_U64(ctx, 11));
        ctx->pc = 0x342BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342BECu;
        // 0x342bf0: 0x8c8c0004  lw          $t4, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342bec) {
            ctx->pc = 0x342C20u;
            goto label_342c20;
        }
    }
    ctx->pc = 0x342BF4u;
    // 0x342bf4: 0x25843fff  addiu       $a0, $t4, 0x3FFF
    ctx->pc = 0x342bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16383));
    // 0x342bf8: 0x29830000  slti        $v1, $t4, 0x0
    ctx->pc = 0x342bf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x342bfc: 0x83600b  movn        $t4, $a0, $v1
    ctx->pc = 0x342bfcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x342c00: 0xc1383  sra         $v0, $t4, 14
    ctx->pc = 0x342c00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 14));
    // 0x342c04: 0x4d1018  mult        $v0, $v0, $t5
    ctx->pc = 0x342c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x342c08: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x342c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x342c0c: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x342c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x342c10: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x342c10u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x342c14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x342C14u;
    {
        const bool branch_taken_0x342c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C14u;
        // 0x342c18: 0xaf200000  sw          $zero, 0x0($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342c14) {
            ctx->pc = 0x342C58u;
            goto label_342c58;
        }
    }
    ctx->pc = 0x342C1Cu;
    // 0x342c1c: 0x0  nop
    ctx->pc = 0x342c1cu;
    // NOP
label_342c20:
    // 0x342c20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x342c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x342c24: 0x15c20010  bne         $t6, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x342C24u;
    {
        const bool branch_taken_0x342c24 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 2));
        ctx->pc = 0x342C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C24u;
        // 0x342c28: 0x29830000  slti        $v1, $t4, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342c24) {
            ctx->pc = 0x342C68u;
            goto label_342c68;
        }
    }
    ctx->pc = 0x342C2Cu;
    // 0x342c2c: 0x29820000  slti        $v0, $t4, 0x0
    ctx->pc = 0x342c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x342c30: 0x25843fff  addiu       $a0, $t4, 0x3FFF
    ctx->pc = 0x342c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16383));
    // 0x342c34: 0x82600b  movn        $t4, $a0, $v0
    ctx->pc = 0x342c34u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x342c38: 0xc1b83  sra         $v1, $t4, 14
    ctx->pc = 0x342c38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 12), 14));
    // 0x342c3c: 0x6d1018  mult        $v0, $v1, $t5
    ctx->pc = 0x342c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x342c40: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x342c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x342c44: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x342c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x342c48: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x342c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x342c4c: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x342c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x342c50: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x342c50u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x342c54: 0xaf230000  sw          $v1, 0x0($t9)
    ctx->pc = 0x342c54u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 3));
label_342c58:
    // 0x342c58: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x342c58u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x342c5c: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x342c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x342c60: 0x3e00008  jr          $ra
    ctx->pc = 0x342C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C60u;
        // 0x342c64: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342C68u;
label_342c68:
    // 0x342c68: 0x25843fff  addiu       $a0, $t4, 0x3FFF
    ctx->pc = 0x342c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16383));
    // 0x342c6c: 0x83600b  movn        $t4, $a0, $v1
    ctx->pc = 0x342c6cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x342c70: 0x24055dcc  addiu       $a1, $zero, 0x5DCC
    ctx->pc = 0x342c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24012));
    // 0x342c74: 0xc1383  sra         $v0, $t4, 14
    ctx->pc = 0x342c74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 14));
    // 0x342c78: 0x24065f0c  addiu       $a2, $zero, 0x5F0C
    ctx->pc = 0x342c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24332));
    // 0x342c7c: 0x4d1818  mult        $v1, $v0, $t5
    ctx->pc = 0x342c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x342c80: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x342c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x342c84: 0x340781c0  ori         $a3, $zero, 0x81C0
    ctx->pc = 0x342c84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33216);
    // 0x342c88: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x342c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x342c8c: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x342c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x342c90: 0xade30000  sw          $v1, 0x0($t7)
    ctx->pc = 0x342c90u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 3));
    // 0x342c94: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x342c94u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x342c98: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x342c98u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    // 0x342c9c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x342c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x342ca0: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x342ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x342ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x342CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CA4u;
        // 0x342ca8: 0xad470000  sw          $a3, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342CACu;
    // 0x342cac: 0x0  nop
    ctx->pc = 0x342cacu;
    // NOP
    ctx->pc = 0x342cb0u;
}
