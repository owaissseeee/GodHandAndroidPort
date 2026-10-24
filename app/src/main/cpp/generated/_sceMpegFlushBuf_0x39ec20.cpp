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

// Function: _sceMpegFlushBuf
// Address: 0x39ec20 - 0x39ecb8
void _sceMpegFlushBuf_0x39ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegFlushBuf_0x39ec20");
#endif

    switch (ctx->pc) {
        case 0x39ec3cu: goto label_39ec3c;
        case 0x39ec8cu: goto label_39ec8c;
        default: break;
    }

    ctx->pc = 0x39ec20u;

    // 0x39ec20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39ec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39ec24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39ec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x39ec28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39ec28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39ec2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39ec2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ec30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39ec30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39ec34: 0xc0e7b2e  jal         func_39ECB8
    ctx->pc = 0x39EC34u;
    SET_GPR_U32(ctx, 31, 0x39EC3Cu);
    ctx->pc = 0x39EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EC34u;
    // 0x39ec38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECB8u, 0x39EC34u, 0x39EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EC3Cu;
label_39ec3c:
    // 0x39ec3c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x39ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x39ec40: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39ec44: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x39ec44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x39ec48: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x39ec48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x39ec4c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x39ec4cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 16));
    // 0x39ec50: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x39ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x39ec54: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x39ec54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x39ec58: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x39ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x39ec5c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39EC5Cu;
    {
        const bool branch_taken_0x39ec5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x39EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC5Cu;
        // 0x39ec60: 0xae30082c  sw          $s0, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ec5c) {
            ctx->pc = 0x39EC78u;
            goto label_39ec78;
        }
    }
    ctx->pc = 0x39EC64u;
    // 0x39ec64: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x39ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x39ec68: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39EC68u;
    {
        const bool branch_taken_0x39ec68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x39ec68) {
            ctx->pc = 0x39EC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39EC68u;
            // 0x39ec6c: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39EC84u;
            goto label_39ec84;
        }
    }
    ctx->pc = 0x39EC70u;
    // 0x39ec70: 0x16040003  bne         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39EC70u;
    {
        const bool branch_taken_0x39ec70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x39EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC70u;
        // 0x39ec74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ec70) {
            ctx->pc = 0x39EC80u;
            goto label_39ec80;
        }
    }
    ctx->pc = 0x39EC78u;
label_39ec78:
    // 0x39ec78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39EC78u;
    {
        const bool branch_taken_0x39ec78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EC78u;
        // 0x39ec7c: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ec78) {
            ctx->pc = 0x39EC84u;
            goto label_39ec84;
        }
    }
    ctx->pc = 0x39EC80u;
label_39ec80:
    // 0x39ec80: 0xae220828  sw          $v0, 0x828($s1)
    ctx->pc = 0x39ec80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
label_39ec84:
    // 0x39ec84: 0xc0e7a4a  jal         func_39E928
    ctx->pc = 0x39EC84u;
    SET_GPR_U32(ctx, 31, 0x39EC8Cu);
    ctx->pc = 0x39EC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EC84u;
    // 0x39ec88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E928u, 0x39EC84u, 0x39EC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EC8Cu;
label_39ec8c:
    // 0x39ec8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x39ec8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x39ec90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x39ec90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x39ec94: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x39ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x39ec98: 0xae23084c  sw          $v1, 0x84C($s1)
    ctx->pc = 0x39ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 3));
    // 0x39ec9c: 0xae220848  sw          $v0, 0x848($s1)
    ctx->pc = 0x39ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
    // 0x39eca0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39eca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39eca4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39eca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39eca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39eca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ecac: 0x3e00008  jr          $ra
    ctx->pc = 0x39ECACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ECACu;
        // 0x39ecb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39ECACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39ECB4u;
    // 0x39ecb4: 0x0  nop
    ctx->pc = 0x39ecb4u;
    // NOP
    ctx->pc = 0x39ecb8u;
}
