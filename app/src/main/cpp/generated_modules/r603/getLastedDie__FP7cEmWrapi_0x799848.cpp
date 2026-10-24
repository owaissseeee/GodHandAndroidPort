#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: getLastedDie__FP7cEmWrapi
// Address: 0x799848 - 0x799978
void getLastedDie__FP7cEmWrapi_0x799848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getLastedDie__FP7cEmWrapi_0x799848");
#endif

    switch (ctx->pc) {
        case 0x7998b0u: goto label_7998b0;
        case 0x7998c8u: goto label_7998c8;
        case 0x7998e0u: goto label_7998e0;
        case 0x7998f4u: goto label_7998f4;
        case 0x799938u: goto label_799938;
        default: break;
    }

    ctx->pc = 0x799848u;

    // 0x799848: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x799848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x79984c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x79984cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x799850: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x799850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799854: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x799854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x799858: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x79985c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x79985cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x799860: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x799864: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x799864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x799868: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x799868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x79986c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x79986cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x799870: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x799870u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x799874: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x799874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x799878: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x799878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x79987c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x79987cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799880: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x799880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x799884: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x799884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x799888: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x799888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x79988c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x79988cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799890: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x799890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x799894: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x799894u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799898: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x799898u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x79989c: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x79989cu;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x7998a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7998a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998a4: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x7998A4u;
    {
        const bool branch_taken_0x7998a4 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x7998A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A4u;
        // 0x7998a8: 0x3a0b02d  daddu       $s6, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998a4) {
            ctx->pc = 0x7998C8u;
            goto label_7998c8;
        }
    }
    ctx->pc = 0x7998ACu;
    // 0x7998ac: 0x0  nop
    ctx->pc = 0x7998acu;
    // NOP
label_7998b0:
    // 0x7998b0: 0x2c41821  addu        $v1, $s6, $a0
    ctx->pc = 0x7998b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x7998b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7998b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x7998b8: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x7998b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x7998bc: 0x0  nop
    ctx->pc = 0x7998bcu;
    // NOP
    // 0x7998c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7998C0u;
    {
        const bool branch_taken_0x7998c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C0u;
        // 0x7998c4: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998c0) {
            ctx->pc = 0x7998B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998b0;
        }
    }
    ctx->pc = 0x7998C8u;
label_7998c8:
    // 0x7998c8: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x7998C8u;
    {
        const bool branch_taken_0x7998c8 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x7998CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C8u;
        // 0x7998cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998c8) {
            ctx->pc = 0x79991Cu;
            goto label_79991c;
        }
    }
    ctx->pc = 0x7998D0u;
    // 0x7998d0: 0x8fd20000  lw          $s2, 0x0($fp)
    ctx->pc = 0x7998d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x7998d4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7998d8: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x7998d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998dc: 0x0  nop
    ctx->pc = 0x7998dcu;
    // NOP
label_7998e0:
    // 0x7998e0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x7998e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7998e4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x7998E4u;
    {
        const bool branch_taken_0x7998e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7998e4) {
            ctx->pc = 0x7998E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7998E4u;
            // 0x7998e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79990Cu;
            goto label_79990c;
        }
    }
    ctx->pc = 0x7998ECu;
    // 0x7998ec: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7998ECu;
    SET_GPR_U32(ctx, 31, 0x7998F4u);
    ctx->pc = 0x7998F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998ECu;
    // 0x7998f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7998ECu, 0x7998F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998F4u;
label_7998f4:
    // 0x7998f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7998F4u;
    {
        const bool branch_taken_0x7998f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7998f4) {
            ctx->pc = 0x7998F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7998F4u;
            // 0x7998f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79990Cu;
            goto label_79990c;
        }
    }
    ctx->pc = 0x7998FCu;
    // 0x7998fc: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x7998fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x799900: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x799900u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799904: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x799908: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_79990c:
    // 0x79990c: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x799910: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x799910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x799914: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x799914u;
    {
        const bool branch_taken_0x799914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799914u;
        // 0x799918: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799914) {
            ctx->pc = 0x7998E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998e0;
        }
    }
    ctx->pc = 0x79991Cu;
label_79991c:
    // 0x79991c: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x79991cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x799920: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x799920u;
    {
        const bool branch_taken_0x799920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799920u;
        // 0x799924: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799920) {
            ctx->pc = 0x799940u;
            goto label_799940;
        }
    }
    ctx->pc = 0x799928u;
    // 0x799928: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79992c: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x799930: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799930u;
    SET_GPR_U32(ctx, 31, 0x799938u);
    ctx->pc = 0x799934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799930u;
    // 0x799934: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799930u, 0x799938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799938u;
label_799938:
    // 0x799938: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x799938u;
    {
        const bool branch_taken_0x799938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799938) {
            ctx->pc = 0x7998C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998c8;
        }
    }
    ctx->pc = 0x799940u;
label_799940:
    // 0x799940: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x799940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799944: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x799944u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799948: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x799948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79994c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x79994cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799950: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x799950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799954: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x799954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799958: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x799958u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79995c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x79995cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799960: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x799960u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799964: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x799964u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799968: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x799968u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79996c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79996cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799970: 0x3e00008  jr          $ra
    ctx->pc = 0x799970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799970u;
        // 0x799974: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799978u;
}
} // namespace gh_r603
