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

// Function: func_003234D0
// Address: 0x3234d0 - 0x323568
void func_003234D0_0x3234d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003234D0_0x3234d0");
#endif

    switch (ctx->pc) {
        case 0x3234e4u: goto label_3234e4;
        case 0x323500u: goto label_323500;
        case 0x32351cu: goto label_32351c;
        default: break;
    }

    ctx->pc = 0x3234d0u;

    // 0x3234d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3234d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3234d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3234d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3234d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3234d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3234dc: 0xc0c8d1e  jal         func_323478
    ctx->pc = 0x3234DCu;
    SET_GPR_U32(ctx, 31, 0x3234E4u);
    ctx->pc = 0x323478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323478u, 0x3234DCu, 0x3234E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3234E4u;
label_3234e4:
    // 0x3234e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3234e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3234e8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3234e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3234ec: 0x248415e8  addiu       $a0, $a0, 0x15E8
    ctx->pc = 0x3234ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5608));
    // 0x3234f0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3234F0u;
    {
        const bool branch_taken_0x3234f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3234F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3234F0u;
        // 0x3234f4: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3234f0) {
            ctx->pc = 0x323514u;
            goto label_323514;
        }
    }
    ctx->pc = 0x3234F8u;
    // 0x3234f8: 0xc0c9f40  jal         func_327D00
    ctx->pc = 0x3234F8u;
    SET_GPR_U32(ctx, 31, 0x323500u);
    ctx->pc = 0x3234FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3234F8u;
    // 0x3234fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327D00u, 0x3234F8u, 0x323500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323500u;
label_323500:
    // 0x323500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x323500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323504: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x323504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x323508: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x323508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32350c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32350Cu;
    {
        const bool branch_taken_0x32350c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32350Cu;
        // 0x323510: 0x24841620  addiu       $a0, $a0, 0x1620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32350c) {
            ctx->pc = 0x323528u;
            goto label_323528;
        }
    }
    ctx->pc = 0x323514u;
label_323514:
    // 0x323514: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x323514u;
    SET_GPR_U32(ctx, 31, 0x32351Cu);
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x323514u, 0x32351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32351Cu;
label_32351c:
    // 0x32351c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x32351Cu;
    {
        const bool branch_taken_0x32351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32351Cu;
        // 0x323520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32351c) {
            ctx->pc = 0x323554u;
            goto label_323554;
        }
    }
    ctx->pc = 0x323524u;
    // 0x323524: 0x0  nop
    ctx->pc = 0x323524u;
    // NOP
label_323528:
    // 0x323528: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x323528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x32352c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x32352cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x323530: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x323530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x323534: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x323534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x323538: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x323538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x32353c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x32353cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x323540: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x323540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x323544: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x323544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x323548: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x323548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x32354c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x32354cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x323550: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x323550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323554:
    // 0x323554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323558: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x323558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32355c: 0x3e00008  jr          $ra
    ctx->pc = 0x32355Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32355Cu;
        // 0x323560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32355Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323564u;
    // 0x323564: 0x0  nop
    ctx->pc = 0x323564u;
    // NOP
    ctx->pc = 0x323568u;
}
