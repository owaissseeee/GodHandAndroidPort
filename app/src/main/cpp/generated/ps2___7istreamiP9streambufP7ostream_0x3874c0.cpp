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

// Function: __7istreamiP9streambufP7ostream
// Address: 0x3874c0 - 0x3875a8
void ps2___7istreamiP9streambufP7ostream_0x3874c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___7istreamiP9streambufP7ostream_0x3874c0");
#endif

    ctx->pc = 0x3874c0u;

    // 0x3874c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3874c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3874c4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3874c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3874c8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3874c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3874cc: 0x11200013  beqz        $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3874CCu;
    {
        const bool branch_taken_0x3874cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3874D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3874CCu;
        // 0x3874d0: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3874cc) {
            ctx->pc = 0x38751Cu;
            goto label_38751c;
        }
    }
    ctx->pc = 0x3874D4u;
    // 0x3874d4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x3874d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3874d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3874d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3874dc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3874dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x3874e0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3874e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3874e4: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x3874e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x3874e8: 0x2484d340  addiu       $a0, $a0, -0x2CC0
    ctx->pc = 0x3874e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955840));
    // 0x3874ec: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x3874ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x3874f0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3874f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3874f4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3874f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3874f8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3874f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3874fc: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x3874fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x387500: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x387500u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x387504: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x387504u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x387508: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x387508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x38750c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x38750cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x387510: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x387510u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x387514: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x387514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x387518: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x387518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_38751c:
    // 0x38751c: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x38751cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x387520: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x387520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x387524: 0x2444d168  addiu       $a0, $v0, -0x2E98
    ctx->pc = 0x387524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955368));
    // 0x387528: 0x1520000b  bnez        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x387528u;
    {
        const bool branch_taken_0x387528 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x38752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387528u;
        // 0x38752c: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387528) {
            ctx->pc = 0x387558u;
            goto label_387558;
        }
    }
    ctx->pc = 0x387530u;
    // 0x387530: 0xdc45d168  ld          $a1, -0x2E98($v0)
    ctx->pc = 0x387530u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294955368)));
    // 0x387534: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x387534u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x387538: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x387538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x38753c: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x38753cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x387540: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x387540u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x387544: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x387544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x387548: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x387548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x38754c: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x38754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x387550: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x387550u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x387554: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x387554u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_387558:
    // 0x387558: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x387558u;
    {
        const bool branch_taken_0x387558 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x387558) {
            ctx->pc = 0x38755Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387558u;
            // 0x38755c: 0xa0c0001a  sb          $zero, 0x1A($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387568u;
            goto label_387568;
        }
    }
    ctx->pc = 0x387560u;
    // 0x387560: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x387560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x387564: 0xa0c2001a  sb          $v0, 0x1A($a2)
    ctx->pc = 0x387564u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 2));
label_387568:
    // 0x387568: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x387568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x38756c: 0xa0c0001b  sb          $zero, 0x1B($a2)
    ctx->pc = 0x38756cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x387570: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x387570u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    // 0x387574: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x387574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x387578: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x387578u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x38757c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x38757cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x387580: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x387580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x387584: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x387584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387588: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x387588u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x38758c: 0xa4c40018  sh          $a0, 0x18($a2)
    ctx->pc = 0x38758cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x387590: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x387590u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x387594: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x387594u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x387598: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x387598u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x38759c: 0x3e00008  jr          $ra
    ctx->pc = 0x38759Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3875A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38759Cu;
        // 0x3875a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38759Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3875A4u;
    // 0x3875a4: 0x0  nop
    ctx->pc = 0x3875a4u;
    // NOP
    ctx->pc = 0x3875a8u;
}
