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

// Function: __7ostreamiP9streambufP7ostream
// Address: 0x389090 - 0x389170
void ps2___7ostreamiP9streambufP7ostream_0x389090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___7ostreamiP9streambufP7ostream_0x389090");
#endif

    ctx->pc = 0x389090u;

    // 0x389090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x389090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x389094: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x389094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389098: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x389098u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38909c: 0x11200013  beqz        $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x38909Cu;
    {
        const bool branch_taken_0x38909c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3890A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38909Cu;
        // 0x3890a0: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38909c) {
            ctx->pc = 0x3890ECu;
            goto label_3890ec;
        }
    }
    ctx->pc = 0x3890A4u;
    // 0x3890a4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x3890a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3890a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3890a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3890ac: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3890acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x3890b0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3890b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3890b4: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x3890b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x3890b8: 0x2484d340  addiu       $a0, $a0, -0x2CC0
    ctx->pc = 0x3890b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955840));
    // 0x3890bc: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x3890bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x3890c0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3890c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3890c4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3890c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3890c8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3890c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3890cc: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x3890ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x3890d0: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x3890d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x3890d4: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x3890d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x3890d8: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x3890d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x3890dc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x3890dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x3890e0: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x3890e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x3890e4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3890e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3890e8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3890e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_3890ec:
    // 0x3890ec: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x3890ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3890f0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3890f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3890f4: 0x2444d178  addiu       $a0, $v0, -0x2E88
    ctx->pc = 0x3890f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955384));
    // 0x3890f8: 0x1520000b  bnez        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x3890F8u;
    {
        const bool branch_taken_0x3890f8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3890FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3890F8u;
        // 0x3890fc: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3890f8) {
            ctx->pc = 0x389128u;
            goto label_389128;
        }
    }
    ctx->pc = 0x389100u;
    // 0x389100: 0xdc45d178  ld          $a1, -0x2E88($v0)
    ctx->pc = 0x389100u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294955384)));
    // 0x389104: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x389104u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x389108: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x389108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x38910c: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x38910cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x389110: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x389110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x389114: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x389114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x389118: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x389118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x38911c: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x38911cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x389120: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x389120u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x389124: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x389124u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_389128:
    // 0x389128: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x389128u;
    {
        const bool branch_taken_0x389128 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x389128) {
            ctx->pc = 0x38912Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389128u;
            // 0x38912c: 0xa0c0001a  sb          $zero, 0x1A($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x389138u;
            goto label_389138;
        }
    }
    ctx->pc = 0x389130u;
    // 0x389130: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x389130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x389134: 0xa0c2001a  sb          $v0, 0x1A($a2)
    ctx->pc = 0x389134u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 2));
label_389138:
    // 0x389138: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x389138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38913c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x38913cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x389140: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x389140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x389144: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x389144u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x389148: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x389148u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x38914c: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x38914cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389150: 0xa4c30018  sh          $v1, 0x18($a2)
    ctx->pc = 0x389150u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x389154: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x389154u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x389158: 0xacc5001c  sw          $a1, 0x1C($a2)
    ctx->pc = 0x389158u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 5));
    // 0x38915c: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x38915cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x389160: 0xa0c0001b  sb          $zero, 0x1B($a2)
    ctx->pc = 0x389160u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x389164: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x389164u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x389168: 0x3e00008  jr          $ra
    ctx->pc = 0x389168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389168u;
        // 0x38916c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389170u;
}
