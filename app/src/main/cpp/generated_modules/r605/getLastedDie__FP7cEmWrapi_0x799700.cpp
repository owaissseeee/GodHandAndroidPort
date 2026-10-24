#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: getLastedDie__FP7cEmWrapi
// Address: 0x799700 - 0x799830
void getLastedDie__FP7cEmWrapi_0x799700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getLastedDie__FP7cEmWrapi_0x799700");
#endif

    switch (ctx->pc) {
        case 0x799768u: goto label_799768;
        case 0x799780u: goto label_799780;
        case 0x799798u: goto label_799798;
        case 0x7997acu: goto label_7997ac;
        case 0x7997f0u: goto label_7997f0;
        default: break;
    }

    ctx->pc = 0x799700u;

    // 0x799700: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x799700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x799704: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x799704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x799708: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x799708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79970c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x79970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x799710: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x799714: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x799714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x799718: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x79971c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x79971cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x799720: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x799720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x799724: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x799724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x799728: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x79972c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x79972cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x799730: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x799730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x799734: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x799734u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799738: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x799738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x79973c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x799740: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x799740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x799744: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x799744u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799748: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x799748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79974c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x79974cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799750: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x799750u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x799754: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x799754u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x799758: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79975c: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x79975Cu;
    {
        const bool branch_taken_0x79975c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x799760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79975Cu;
        // 0x799760: 0x3a0b02d  daddu       $s6, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79975c) {
            ctx->pc = 0x799780u;
            goto label_799780;
        }
    }
    ctx->pc = 0x799764u;
    // 0x799764: 0x0  nop
    ctx->pc = 0x799764u;
    // NOP
label_799768:
    // 0x799768: 0x2c41821  addu        $v1, $s6, $a0
    ctx->pc = 0x799768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x79976c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x799770: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x799770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x799774: 0x0  nop
    ctx->pc = 0x799774u;
    // NOP
    // 0x799778: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799778u;
    {
        const bool branch_taken_0x799778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799778u;
        // 0x79977c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799778) {
            ctx->pc = 0x799768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799768;
        }
    }
    ctx->pc = 0x799780u;
label_799780:
    // 0x799780: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x799780u;
    {
        const bool branch_taken_0x799780 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x799784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799780u;
        // 0x799784: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799780) {
            ctx->pc = 0x7997D4u;
            goto label_7997d4;
        }
    }
    ctx->pc = 0x799788u;
    // 0x799788: 0x8fd20000  lw          $s2, 0x0($fp)
    ctx->pc = 0x799788u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x79978c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799790: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x799790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799794: 0x0  nop
    ctx->pc = 0x799794u;
    // NOP
label_799798:
    // 0x799798: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x799798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79979c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x79979Cu;
    {
        const bool branch_taken_0x79979c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79979c) {
            ctx->pc = 0x7997A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79979Cu;
            // 0x7997a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7997C4u;
            goto label_7997c4;
        }
    }
    ctx->pc = 0x7997A4u;
    // 0x7997a4: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7997A4u;
    SET_GPR_U32(ctx, 31, 0x7997ACu);
    ctx->pc = 0x7997A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997A4u;
    // 0x7997a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7997A4u, 0x7997ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997ACu;
label_7997ac:
    // 0x7997ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7997ACu;
    {
        const bool branch_taken_0x7997ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7997ac) {
            ctx->pc = 0x7997B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7997ACu;
            // 0x7997b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7997C4u;
            goto label_7997c4;
        }
    }
    ctx->pc = 0x7997B4u;
    // 0x7997b4: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x7997b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x7997b8: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x7997b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x7997bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x7997c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x7997c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_7997c4:
    // 0x7997c4: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x7997c8: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x7997c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x7997cc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x7997CCu;
    {
        const bool branch_taken_0x7997cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7997D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997CCu;
        // 0x7997d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997cc) {
            ctx->pc = 0x799798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799798;
        }
    }
    ctx->pc = 0x7997D4u;
label_7997d4:
    // 0x7997d4: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x7997d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x7997d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7997D8u;
    {
        const bool branch_taken_0x7997d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997D8u;
        // 0x7997dc: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997d8) {
            ctx->pc = 0x7997F8u;
            goto label_7997f8;
        }
    }
    ctx->pc = 0x7997E0u;
    // 0x7997e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7997e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7997e4: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x7997e8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7997E8u;
    SET_GPR_U32(ctx, 31, 0x7997F0u);
    ctx->pc = 0x7997ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997E8u;
    // 0x7997ec: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7997E8u, 0x7997F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F0u;
label_7997f0:
    // 0x7997f0: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x7997F0u;
    {
        const bool branch_taken_0x7997f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7997f0) {
            ctx->pc = 0x799780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799780;
        }
    }
    ctx->pc = 0x7997F8u;
label_7997f8:
    // 0x7997f8: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x7997f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997fc: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x7997fcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799800: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x799800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799804: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x799804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799808: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x799808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79980c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x79980cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799810: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x799810u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799814: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x799814u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799818: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x799818u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79981c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x79981cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799820: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x799820u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799824: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799828: 0x3e00008  jr          $ra
    ctx->pc = 0x799828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799828u;
        // 0x79982c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799830u;
}
} // namespace gh_r605
