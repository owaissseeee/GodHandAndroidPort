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

// Function: IdDispObj_construct
// Address: 0x161bd0 - 0x161cc0
void IdDispObj_construct_0x161bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IdDispObj_construct_0x161bd0");
#endif

    if (__builtin_expect(ctx->pc != 0x161bd0u, 0)) {
        switch (ctx->pc) {
            case 0x161becu: goto label_161bec;
            case 0x161bfcu: goto label_161bfc;
            case 0x161c18u: goto label_161c18;
            case 0x161c28u: goto label_161c28;
            case 0x161c30u: goto label_161c30;
            case 0x161c48u: goto label_161c48;
            case 0x161c70u: goto label_161c70;
            case 0x161c78u: goto label_161c78;
            default: break;
        }
    }


    // 0x161bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x161bd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x161bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x161bd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x161bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x161bdc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x161bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x161be0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161be4: 0xc058574  jal         func_1615D0
    SET_GPR_U32(ctx, 31, 0x161BECu);
    ctx->pc = 0x161BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161BE4u;
    // 0x161be8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj0000_Set_Fields_68_6C_From_D_007474A0_1615D0_0x1615d0, 0x1615d0u, 0x161becu)) {
        return;
    }
    ctx->pc = 0x161BECu;
label_161bec:
    // 0x161bec: 0x3c050042  lui         $a1, 0x42
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x161bf0: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bf4: 0xc058540  jal         func_161500
    SET_GPR_U32(ctx, 31, 0x161BFCu);
    ctx->pc = 0x161BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161BF4u;
    // 0x161bf8: 0x24a5f378  addiu       $a1, $a1, -0xC88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964088));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00161500_0x161500, 0x161500u, 0x161bfcu)) {
        return;
    }
    ctx->pc = 0x161BFCu;
label_161bfc:
    // 0x161bfc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x161BFCu;
    {
        const bool branch_taken_0x161bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BFCu;
        // 0x161c00: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161bfc) {
            ctx->pc = 0x161C60u;
            goto label_161c60;
        }
    }
    // 0x161c04: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x161c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x161c08: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x161c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9092)));
    // 0x161c0c: 0x24050006  addiu       $a1, $zero, 0x6
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x161c10: 0xc0ab33e  jal         func_2ACCF8
    SET_GPR_U32(ctx, 31, 0x161C18u);
    ctx->pc = 0x161C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161C10u;
    // 0x161c14: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDManager_setIDData_0x2accf8, 0x2accf8u, 0x161c18u)) {
        return;
    }
    ctx->pc = 0x161C18u;
label_161c18:
    // 0x161c18: 0x24050006  addiu       $a1, $zero, 0x6
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x161c1c: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c20: 0xc0aa7a8  jal         func_2A9EA0
    SET_GPR_U32(ctx, 31, 0x161C28u);
    ctx->pc = 0x161C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161C20u;
    // 0x161c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_initialize_0x2a9ea0, 0x2a9ea0u, 0x161c28u)) {
        return;
    }
    ctx->pc = 0x161C28u;
label_161c28:
    // 0x161c28: 0xc0aae9e  jal         func_2ABA78
    SET_GPR_U32(ctx, 31, 0x161C30u);
    ctx->pc = 0x161C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161C28u;
    // 0x161c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_resetAnim_0x2aba78, 0x2aba78u, 0x161c30u)) {
        return;
    }
    ctx->pc = 0x161C30u;
label_161c30:
    // 0x161c30: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161c34: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c38: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x161c38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x161c3c: 0x24050006  addiu       $a1, $zero, 0x6
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x161c40: 0xc0aa7cc  jal         func_2A9F30
    SET_GPR_U32(ctx, 31, 0x161C48u);
    ctx->pc = 0x161C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161C40u;
    // 0x161c44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_setPackedMessData_0x2a9f30, 0x2a9f30u, 0x161c48u)) {
        return;
    }
    ctx->pc = 0x161C48u;
label_161c48:
    // 0x161c48: 0x24030002  addiu       $v1, $zero, 0x2
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161c4c: 0xa200005a  sb          $zero, 0x5A($s0)
    ctx->pc = 0x161c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x161c50: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x161c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x161c54: 0xa200005b  sb          $zero, 0x5B($s0)
    ctx->pc = 0x161c54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x161c58: 0xa200005c  sb          $zero, 0x5C($s0)
    ctx->pc = 0x161c58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x161c5c: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x161c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
label_161c60:
    // 0x161c60: 0x882d  daddu       $s1, $zero, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c64: 0x26120080  addiu       $s2, $s0, 0x80
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x161c68: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c6c: 0x0  nop
    ctx->pc = 0x161c6cu;
    // NOP
label_161c70:
    // 0x161c70: 0xc0aa904  jal         func_2AA410
    SET_GPR_U32(ctx, 31, 0x161C78u);
    ctx->pc = 0x161C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161C70u;
    // 0x161c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cIDBase_getIDWork_0x2aa410, 0x2aa410u, 0x161c78u)) {
        return;
    }
    ctx->pc = 0x161C78u;
label_161c78:
    // 0x161c78: 0x112080  sll         $a0, $s1, 2
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x161c7c: 0x26230001  addiu       $v1, $s1, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x161c80: 0x2442021  addu        $a0, $s2, $a0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x161c84: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x161c88: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x161c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x161c8c: 0x2e22001b  sltiu       $v0, $s1, 0x1B
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x161c90: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x161C90u;
    {
        const bool branch_taken_0x161c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C90u;
        // 0x161c94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c90) {
            ctx->pc = 0x161C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161c70;
        }
    }
    // 0x161c98: 0xa20000ef  sb          $zero, 0xEF($s0)
    ctx->pc = 0x161c98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 239), (uint8_t)GPR_U32(ctx, 0));
    // 0x161c9c: 0xa20000ec  sb          $zero, 0xEC($s0)
    ctx->pc = 0x161c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 236), (uint8_t)GPR_U32(ctx, 0));
    // 0x161ca0: 0xa20000ed  sb          $zero, 0xED($s0)
    ctx->pc = 0x161ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 237), (uint8_t)GPR_U32(ctx, 0));
    // 0x161ca4: 0xa20000ee  sb          $zero, 0xEE($s0)
    ctx->pc = 0x161ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 238), (uint8_t)GPR_U32(ctx, 0));
    // 0x161ca8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x161ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161cac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x161cacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161cb0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x161cb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x161CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CB8u;
        // 0x161cbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161CC0u;
}