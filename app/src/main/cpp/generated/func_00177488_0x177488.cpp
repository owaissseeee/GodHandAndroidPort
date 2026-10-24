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

// Function: func_00177488
// Address: 0x177488 - 0x177560
void func_00177488_0x177488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00177488_0x177488");
#endif

    switch (ctx->pc) {
        case 0x1774c0u: goto label_1774c0;
        case 0x1774ccu: goto label_1774cc;
        default: break;
    }

    ctx->pc = 0x177488u;

    // 0x177488: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x177488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17748c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x17748cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x177490: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177494: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x177494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x177498: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x177498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x17749c: 0x26110600  addiu       $s1, $s0, 0x600
    ctx->pc = 0x17749cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x1774a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1774a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1774a4: 0x26120d38  addiu       $s2, $s0, 0xD38
    ctx->pc = 0x1774a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3384));
    // 0x1774a8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1774a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1774ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1774acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774b0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1774b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1774b4: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1774b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1774b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1774b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1774bc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1774bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1774c0:
    // 0x1774c0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1774c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1774c4: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x1774C4u;
    SET_GPR_U32(ctx, 31, 0x1774CCu);
    ctx->pc = 0x1774C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774C4u;
    // 0x1774c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1774C4u, 0x1774CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774CCu;
label_1774cc:
    // 0x1774cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1774ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774d0: 0x54b50016  bnel        $a1, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x1774D0u;
    {
        const bool branch_taken_0x1774d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        if (branch_taken_0x1774d0) {
            ctx->pc = 0x1774D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1774D0u;
            // 0x1774d4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17752Cu;
            goto label_17752c;
        }
    }
    ctx->pc = 0x1774D8u;
    // 0x1774d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1774d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1774dc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1774dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1774e0: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1774e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1774e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1774e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1774e8: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x1774e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1774ec: 0x481000a  bgez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1774ECu;
    {
        const bool branch_taken_0x1774ec = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1774F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774ECu;
        // 0x1774f0: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774ec) {
            ctx->pc = 0x177518u;
            goto label_177518;
        }
    }
    ctx->pc = 0x1774F4u;
    // 0x1774f4: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x1774f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1774f8: 0xa2130d3c  sb          $s3, 0xD3C($s0)
    ctx->pc = 0x1774f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3388), (uint8_t)GPR_U32(ctx, 19));
    // 0x1774fc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1774fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x177500: 0xa21402f4  sb          $s4, 0x2F4($s0)
    ctx->pc = 0x177500u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 20));
    // 0x177504: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x177504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x177508: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x177508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x17750c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x17750cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x177510: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x177510u;
    {
        const bool branch_taken_0x177510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177510u;
        // 0x177514: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177510) {
            ctx->pc = 0x177528u;
            goto label_177528;
        }
    }
    ctx->pc = 0x177518u;
label_177518:
    // 0x177518: 0xa20502f4  sb          $a1, 0x2F4($s0)
    ctx->pc = 0x177518u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 5));
    // 0x17751c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x17751cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x177520: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x177520u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x177524: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x177524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_177528:
    // 0x177528: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x177528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_17752c:
    // 0x17752c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x17752cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x177530: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x177530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x177534: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x177534u;
    {
        const bool branch_taken_0x177534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177534u;
        // 0x177538: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177534) {
            ctx->pc = 0x1774C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1774c0;
        }
    }
    ctx->pc = 0x17753Cu;
    // 0x17753c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17753cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x177540: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x177540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177544: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x177544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177548: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17754c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x17754cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177550: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x177550u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177558: 0x3e00008  jr          $ra
    ctx->pc = 0x177558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177558u;
        // 0x17755c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177560u;
}
