#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r602_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r602
{
// Function: getLastedDie__FP7cEmWrapi
// Address: 0x799480 - 0x7995b0
void getLastedDie__FP7cEmWrapi_0x799480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getLastedDie__FP7cEmWrapi_0x799480");
#endif

    switch (ctx->pc) {
        case 0x7994e8u: goto label_7994e8;
        case 0x799500u: goto label_799500;
        case 0x799518u: goto label_799518;
        case 0x79952cu: goto label_79952c;
        case 0x799570u: goto label_799570;
        default: break;
    }

    ctx->pc = 0x799480u;

    // 0x799480: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x799484: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x799484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x799488: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x799488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79948c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x79948cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x799490: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x799494: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x799494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x799498: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x79949c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x79949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x7994a0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x7994a4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x7994a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x7994a8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x7994ac: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x7994acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x7994b0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x7994b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x7994b4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x7994b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994b8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x7994b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x7994bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x7994c0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x7994c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x7994c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x7994c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x7994c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x7994cc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x7994ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994d0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x7994d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x7994d4: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x7994d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7994d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994dc: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x7994DCu;
    {
        const bool branch_taken_0x7994dc = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x7994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994DCu;
        // 0x7994e0: 0x3a0b02d  daddu       $s6, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994dc) {
            ctx->pc = 0x799500u;
            goto label_799500;
        }
    }
    ctx->pc = 0x7994E4u;
    // 0x7994e4: 0x0  nop
    ctx->pc = 0x7994e4u;
    // NOP
label_7994e8:
    // 0x7994e8: 0x2c41821  addu        $v1, $s6, $a0
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x7994ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x7994f0: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x7994f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x7994f4: 0x0  nop
    ctx->pc = 0x7994f4u;
    // NOP
    // 0x7994f8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7994F8u;
    {
        const bool branch_taken_0x7994f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7994FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F8u;
        // 0x7994fc: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994f8) {
            ctx->pc = 0x7994E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994e8;
        }
    }
    ctx->pc = 0x799500u;
label_799500:
    // 0x799500: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x799500u;
    {
        const bool branch_taken_0x799500 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x799504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799500u;
        // 0x799504: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799500) {
            ctx->pc = 0x799554u;
            goto label_799554;
        }
    }
    ctx->pc = 0x799508u;
    // 0x799508: 0x8fd20000  lw          $s2, 0x0($fp)
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x79950c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799510: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x799510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799514: 0x0  nop
    ctx->pc = 0x799514u;
    // NOP
label_799518:
    // 0x799518: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x799518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79951c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x79951Cu;
    {
        const bool branch_taken_0x79951c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79951c) {
            ctx->pc = 0x799520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79951Cu;
            // 0x799520: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799544u;
            goto label_799544;
        }
    }
    ctx->pc = 0x799524u;
    // 0x799524: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799524u;
    SET_GPR_U32(ctx, 31, 0x79952Cu);
    ctx->pc = 0x799528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799524u;
    // 0x799528: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799524u, 0x79952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79952Cu;
label_79952c:
    // 0x79952c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79952Cu;
    {
        const bool branch_taken_0x79952c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79952c) {
            ctx->pc = 0x799530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79952Cu;
            // 0x799530: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799544u;
            goto label_799544;
        }
    }
    ctx->pc = 0x799534u;
    // 0x799534: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x799534u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x799538: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x799538u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79953c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x799540: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_799544:
    // 0x799544: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x799548: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x799548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79954c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x79954Cu;
    {
        const bool branch_taken_0x79954c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79954Cu;
        // 0x799550: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79954c) {
            ctx->pc = 0x799518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799518;
        }
    }
    ctx->pc = 0x799554u;
label_799554:
    // 0x799554: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x799554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x799558: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x799558u;
    {
        const bool branch_taken_0x799558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799558u;
        // 0x79955c: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799558) {
            ctx->pc = 0x799578u;
            goto label_799578;
        }
    }
    ctx->pc = 0x799560u;
    // 0x799560: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799564: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x799568: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799568u;
    SET_GPR_U32(ctx, 31, 0x799570u);
    ctx->pc = 0x79956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799568u;
    // 0x79956c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799568u, 0x799570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799570u;
label_799570:
    // 0x799570: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x799570u;
    {
        const bool branch_taken_0x799570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799570) {
            ctx->pc = 0x799500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799500;
        }
    }
    ctx->pc = 0x799578u;
label_799578:
    // 0x799578: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x799578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79957c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x79957cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799580: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x799580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799584: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x799584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799588: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x799588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79958c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x79958cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799590: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x799590u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799594: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x799594u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799598: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x799598u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79959c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x79959cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7995a0: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x7995a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7995a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x7995a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7995a8: 0x3e00008  jr          $ra
    ctx->pc = 0x7995A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A8u;
        // 0x7995ac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995B0u;
}
} // namespace gh_r602
