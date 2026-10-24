#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __cp_push_exception
// Address: 0x7ca000 - 0x7ca090
void ps2___cp_push_exception_0x7ca000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___cp_push_exception_0x7ca000");
#endif

    switch (ctx->pc) {
        case 0x7ca02cu: goto label_7ca02c;
        case 0x7ca068u: goto label_7ca068;
        default: break;
    }

    ctx->pc = 0x7ca000u;

    // 0x7ca000: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7ca000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7ca004: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x7ca004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x7ca008: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7ca008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ca00c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x7ca00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x7ca010: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7ca010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x7ca014: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x7ca014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ca018: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x7ca018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ca01c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7ca01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7ca020: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7ca020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7ca024: 0xc1f27d2  jal         func_7C9F48
    ctx->pc = 0x7CA024u;
    SET_GPR_U32(ctx, 31, 0x7CA02Cu);
    ctx->pc = 0x7CA028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA024u;
    // 0x7ca028: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9F48u, 0x7CA024u, 0x7CA02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA02Cu;
label_7ca02c:
    // 0x7ca02c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7ca02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ca030: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x7ca030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7ca034: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7ca034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7ca038: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x7ca038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x7ca03c: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x7ca03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x7ca040: 0x24429f90  addiu       $v0, $v0, -0x6070
    ctx->pc = 0x7ca040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942608));
    // 0x7ca044: 0xae130028  sw          $s3, 0x28($s0)
    ctx->pc = 0x7ca044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 19));
    // 0x7ca048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7ca048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ca04c: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x7ca04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x7ca050: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x7ca050u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
    // 0x7ca054: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x7ca054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x7ca058: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x7ca058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x7ca05c: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x7ca05cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x7ca060: 0xc1f2d0c  jal         func_7CB430
    ctx->pc = 0x7CA060u;
    SET_GPR_U32(ctx, 31, 0x7CA068u);
    ctx->pc = 0x7CA064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA060u;
    // 0x7ca064: 0xa6030006  sh          $v1, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB430u, 0x7CA060u, 0x7CA068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA068u;
label_7ca068:
    // 0x7ca068: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7ca068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7ca06c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7ca06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ca070: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x7ca070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x7ca074: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x7ca074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x7ca078: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x7ca078u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ca07c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x7ca07cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ca080: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7ca080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ca084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7ca084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ca088: 0x3e00008  jr          $ra
    ctx->pc = 0x7CA088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA088u;
        // 0x7ca08c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CA088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CA090u;
}
} // namespace gh_mcport
