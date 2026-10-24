#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r802_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r802
{
// Function: __do_global_ctors
// Address: 0x79ab98 - 0x79ac48
void ps2___do_global_ctors_0x79ab98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79ab98");
#endif

    switch (ctx->pc) {
        case 0x79ab98u: goto label_79ab98;
        case 0x79ab9cu: goto label_79ab9c;
        case 0x79aba0u: goto label_79aba0;
        case 0x79aba4u: goto label_79aba4;
        case 0x79aba8u: goto label_79aba8;
        case 0x79abacu: goto label_79abac;
        case 0x79abb0u: goto label_79abb0;
        case 0x79abb4u: goto label_79abb4;
        case 0x79abb8u: goto label_79abb8;
        case 0x79abbcu: goto label_79abbc;
        case 0x79abc0u: goto label_79abc0;
        case 0x79abc4u: goto label_79abc4;
        case 0x79abc8u: goto label_79abc8;
        case 0x79abccu: goto label_79abcc;
        case 0x79abd0u: goto label_79abd0;
        case 0x79abd4u: goto label_79abd4;
        case 0x79abd8u: goto label_79abd8;
        case 0x79abdcu: goto label_79abdc;
        case 0x79abe0u: goto label_79abe0;
        case 0x79abe4u: goto label_79abe4;
        case 0x79abe8u: goto label_79abe8;
        case 0x79abecu: goto label_79abec;
        case 0x79abf0u: goto label_79abf0;
        case 0x79abf4u: goto label_79abf4;
        case 0x79abf8u: goto label_79abf8;
        case 0x79abfcu: goto label_79abfc;
        case 0x79ac00u: goto label_79ac00;
        case 0x79ac04u: goto label_79ac04;
        case 0x79ac08u: goto label_79ac08;
        case 0x79ac0cu: goto label_79ac0c;
        case 0x79ac10u: goto label_79ac10;
        case 0x79ac14u: goto label_79ac14;
        case 0x79ac18u: goto label_79ac18;
        case 0x79ac1cu: goto label_79ac1c;
        case 0x79ac20u: goto label_79ac20;
        case 0x79ac24u: goto label_79ac24;
        case 0x79ac28u: goto label_79ac28;
        case 0x79ac2cu: goto label_79ac2c;
        case 0x79ac30u: goto label_79ac30;
        case 0x79ac34u: goto label_79ac34;
        case 0x79ac38u: goto label_79ac38;
        case 0x79ac3cu: goto label_79ac3c;
        case 0x79ac40u: goto label_79ac40;
        case 0x79ac44u: goto label_79ac44;
        default: break;
    }

    ctx->pc = 0x79ab98u;

label_79ab98:
    // 0x79ab98: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79ab98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79ab9c:
    // 0x79ab9c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79ab9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79aba0:
    // 0x79aba0: 0x8ce5af00  lw          $a1, -0x5100($a3)
    ctx->pc = 0x79aba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294946560)));
label_79aba4:
    // 0x79aba4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79aba8:
    // 0x79aba8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79aba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79abac:
    // 0x79abac: 0x24e3af00  addiu       $v1, $a3, -0x5100
    ctx->pc = 0x79abacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946560));
label_79abb0:
    // 0x79abb0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79abb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79abb4:
    // 0x79abb4: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79abb8:
    if (ctx->pc == 0x79ABB8u) {
        ctx->pc = 0x79ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABB4u;
        // 0x79abb8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABBCu;
        goto label_79abbc;
    }
    ctx->pc = 0x79ABB4u;
    {
        const bool branch_taken_0x79abb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABB4u;
        // 0x79abb8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abb4) {
            ctx->pc = 0x79ABFCu;
            goto label_79abfc;
        }
    }
    ctx->pc = 0x79ABBCu;
label_79abbc:
    // 0x79abbc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79abc0:
    // 0x79abc0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79abc4:
    if (ctx->pc == 0x79ABC4u) {
        ctx->pc = 0x79ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABC0u;
        // 0x79abc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABC8u;
        goto label_79abc8;
    }
    ctx->pc = 0x79ABC0u;
    {
        const bool branch_taken_0x79abc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABC0u;
        // 0x79abc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abc0) {
            ctx->pc = 0x79ABFCu;
            goto label_79abfc;
        }
    }
    ctx->pc = 0x79ABC8u;
label_79abc8:
    // 0x79abc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79abc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79abcc:
    // 0x79abcc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79abccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79abd0:
    // 0x79abd0: 0x24e4af00  addiu       $a0, $a3, -0x5100
    ctx->pc = 0x79abd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946560));
label_79abd4:
    // 0x79abd4: 0x0  nop
    ctx->pc = 0x79abd4u;
    // NOP
label_79abd8:
    // 0x79abd8: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79abd8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79abdc:
    // 0x79abdc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79abdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79abe0:
    // 0x79abe0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79abe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79abe4:
    // 0x79abe4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79abe4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79abe8:
    // 0x79abe8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79abec:
    // 0x79abec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79abecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79abf0:
    // 0x79abf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79abf4:
    // 0x79abf4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79abf8:
    if (ctx->pc == 0x79ABF8u) {
        ctx->pc = 0x79ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABF4u;
        // 0x79abf8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABFCu;
        goto label_79abfc;
    }
    ctx->pc = 0x79ABF4u;
    {
        const bool branch_taken_0x79abf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79abf4) {
            ctx->pc = 0x79ABF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ABF4u;
            // 0x79abf8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ABD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79abd8;
        }
    }
    ctx->pc = 0x79ABFCu;
label_79abfc:
    // 0x79abfc: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79abfcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79ac00:
    // 0x79ac00: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79ac00u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79ac04:
    // 0x79ac04: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79ac08:
    if (ctx->pc == 0x79AC08u) {
        ctx->pc = 0x79AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC04u;
        // 0x79ac08: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC0Cu;
        goto label_79ac0c;
    }
    ctx->pc = 0x79AC04u;
    {
        const bool branch_taken_0x79ac04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC04u;
        // 0x79ac08: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac04) {
            ctx->pc = 0x79AC34u;
            goto label_79ac34;
        }
    }
    ctx->pc = 0x79AC0Cu;
label_79ac0c:
    // 0x79ac0c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79ac10:
    // 0x79ac10: 0x2442af00  addiu       $v0, $v0, -0x5100
    ctx->pc = 0x79ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946560));
label_79ac14:
    // 0x79ac14: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79ac14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79ac18:
    // 0x79ac18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79ac1c:
    // 0x79ac1c: 0x0  nop
    ctx->pc = 0x79ac1cu;
    // NOP
label_79ac20:
    // 0x79ac20: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79ac20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79ac24:
    // 0x79ac24: 0x40f809  jalr        $v0
label_79ac28:
    if (ctx->pc == 0x79AC28u) {
        ctx->pc = 0x79AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC24u;
        // 0x79ac28: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC2Cu;
        goto label_79ac2c;
    }
    ctx->pc = 0x79AC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79AC2Cu);
        ctx->pc = 0x79AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC24u;
        // 0x79ac28: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC24u, 0x79AC2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AC2Cu;
label_79ac2c:
    // 0x79ac2c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79ac30:
    if (ctx->pc == 0x79AC30u) {
        ctx->pc = 0x79AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC2Cu;
        // 0x79ac30: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC34u;
        goto label_79ac34;
    }
    ctx->pc = 0x79AC2Cu;
    {
        const bool branch_taken_0x79ac2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ac2c) {
            ctx->pc = 0x79AC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AC2Cu;
            // 0x79ac30: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ac20;
        }
    }
    ctx->pc = 0x79AC34u;
label_79ac34:
    // 0x79ac34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79ac34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79ac38:
    // 0x79ac38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79ac38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79ac3c:
    // 0x79ac3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79ac3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79ac40:
    // 0x79ac40: 0x3e00008  jr          $ra
label_79ac44:
    if (ctx->pc == 0x79AC44u) {
        ctx->pc = 0x79AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC40u;
        // 0x79ac44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC48u;
        goto label_fallthrough_0x79ac40;
    }
    ctx->pc = 0x79AC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC40u;
        // 0x79ac44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79ac40:
    ctx->pc = 0x79AC48u;
}
} // namespace gh_r802
