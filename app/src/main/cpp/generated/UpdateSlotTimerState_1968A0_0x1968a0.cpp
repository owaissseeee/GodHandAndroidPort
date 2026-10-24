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

// Function: UpdateSlotTimerState_1968A0
// Address: 0x1968a0 - 0x196978
void UpdateSlotTimerState_1968A0_0x1968a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateSlotTimerState_1968A0_0x1968a0");
#endif

    switch (ctx->pc) {
        case 0x1968d8u: goto label_1968d8;
        case 0x1968e4u: goto label_1968e4;
        default: break;
    }

    ctx->pc = 0x1968a0u;

    // 0x1968a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1968a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1968a4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1968a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1968a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1968a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968ac: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1968acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1968b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1968b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1968b4: 0x26110600  addiu       $s1, $s0, 0x600
    ctx->pc = 0x1968b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x1968b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1968b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1968bc: 0x261209d8  addiu       $s2, $s0, 0x9D8
    ctx->pc = 0x1968bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2520));
    // 0x1968c0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1968c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1968c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1968c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968c8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1968c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1968cc: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1968ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1968d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1968d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1968d4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1968d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1968d8:
    // 0x1968d8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1968d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1968dc: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x1968DCu;
    SET_GPR_U32(ctx, 31, 0x1968E4u);
    ctx->pc = 0x1968E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968DCu;
    // 0x1968e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1968DCu, 0x1968E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1968E4u;
label_1968e4:
    // 0x1968e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1968e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1968e8: 0x54b50016  bnel        $a1, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x1968E8u;
    {
        const bool branch_taken_0x1968e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        if (branch_taken_0x1968e8) {
            ctx->pc = 0x1968ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1968E8u;
            // 0x1968ec: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196944u;
            goto label_196944;
        }
    }
    ctx->pc = 0x1968F0u;
    // 0x1968f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1968f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1968f4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1968f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1968f8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1968f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1968fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1968fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196900: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x196900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x196904: 0x481000a  bgez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x196904u;
    {
        const bool branch_taken_0x196904 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x196908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196904u;
        // 0x196908: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196904) {
            ctx->pc = 0x196930u;
            goto label_196930;
        }
    }
    ctx->pc = 0x19690Cu;
    // 0x19690c: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x19690cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x196910: 0xa21309da  sb          $s3, 0x9DA($s0)
    ctx->pc = 0x196910u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2522), (uint8_t)GPR_U32(ctx, 19));
    // 0x196914: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x196914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x196918: 0xa21402f4  sb          $s4, 0x2F4($s0)
    ctx->pc = 0x196918u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 20));
    // 0x19691c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x19691cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x196920: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x196920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x196924: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x196924u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x196928: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x196928u;
    {
        const bool branch_taken_0x196928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196928u;
        // 0x19692c: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196928) {
            ctx->pc = 0x196940u;
            goto label_196940;
        }
    }
    ctx->pc = 0x196930u;
label_196930:
    // 0x196930: 0xa20502f4  sb          $a1, 0x2F4($s0)
    ctx->pc = 0x196930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 5));
    // 0x196934: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x196934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x196938: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x196938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x19693c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x19693cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_196940:
    // 0x196940: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x196940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_196944:
    // 0x196944: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x196944u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x196948: 0x1a60ffe3  blez        $s3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x196948u;
    {
        const bool branch_taken_0x196948 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x19694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196948u;
        // 0x19694c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196948) {
            ctx->pc = 0x1968D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1968d8;
        }
    }
    ctx->pc = 0x196950u;
    // 0x196950: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x196950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196954: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x196954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x196958: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x196958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19695c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19695cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196960: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x196960u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196964: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x196964u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19696c: 0x3e00008  jr          $ra
    ctx->pc = 0x19696Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19696Cu;
        // 0x196970: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19696Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196974u;
    // 0x196974: 0x0  nop
    ctx->pc = 0x196974u;
    // NOP
    ctx->pc = 0x196978u;
}
