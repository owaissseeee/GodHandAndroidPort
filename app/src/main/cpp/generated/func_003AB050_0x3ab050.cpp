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

// Function: func_003AB050
// Address: 0x3ab050 - 0x3ab158
void func_003AB050_0x3ab050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AB050_0x3ab050");
#endif

    switch (ctx->pc) {
        case 0x3ab0a0u: goto label_3ab0a0;
        case 0x3ab0b0u: goto label_3ab0b0;
        case 0x3ab0d8u: goto label_3ab0d8;
        case 0x3ab110u: goto label_3ab110;
        default: break;
    }

    ctx->pc = 0x3ab050u;

    // 0x3ab050: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3ab050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3ab054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ab054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ab058: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ab058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3ab05c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3ab05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3ab060: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3ab060u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab064: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3ab064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3ab068: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3ab068u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab06c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3ab06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3ab070: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3ab070u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab074: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3ab074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3ab078: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3ab078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3ab07c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3ab07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3ab080: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3AB080u;
    {
        const bool branch_taken_0x3ab080 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AB084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB080u;
        // 0x3ab084: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab080) {
            ctx->pc = 0x3AB0B8u;
            goto label_3ab0b8;
        }
    }
    ctx->pc = 0x3AB088u;
    // 0x3ab088: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3ab088u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3ab08c: 0x3c110078  lui         $s1, 0x78
    ctx->pc = 0x3ab08cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)120 << 16));
    // 0x3ab090: 0x2631db08  addiu       $s1, $s1, -0x24F8
    ctx->pc = 0x3ab090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957832));
    // 0x3ab094: 0x8e06a9c8  lw          $a2, -0x5638($s0)
    ctx->pc = 0x3ab094u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3FA9C8u));
    // 0x3ab098: 0xc0ec09a  jal         func_3B0268
    ctx->pc = 0x3AB098u;
    SET_GPR_U32(ctx, 31, 0x3AB0A0u);
    ctx->pc = 0x3AB09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB098u;
    // 0x3ab09c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0268u, 0x3AB098u, 0x3AB0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB0A0u;
label_3ab0a0:
    // 0x3ab0a0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3ab0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3ab0a4: 0xae00a9c8  sw          $zero, -0x5638($s0)
    ctx->pc = 0x3ab0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294945224), GPR_U32(ctx, 0));
    // 0x3ab0a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3AB0A8u;
    {
        const bool branch_taken_0x3ab0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0A8u;
        // 0x3ab0ac: 0xac71a9cc  sw          $s1, -0x5634($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294945228), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab0a8) {
            ctx->pc = 0x3AB130u;
            goto label_3ab130;
        }
    }
    ctx->pc = 0x3AB0B0u;
label_3ab0b0:
    // 0x3ab0b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3AB0B0u;
    {
        const bool branch_taken_0x3ab0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0B0u;
        // 0x3ab0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab0b0) {
            ctx->pc = 0x3AB130u;
            goto label_3ab130;
        }
    }
    ctx->pc = 0x3AB0B8u;
label_3ab0b8:
    // 0x3ab0b8: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x3AB0B8u;
    {
        const bool branch_taken_0x3ab0b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0B8u;
        // 0x3ab0bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab0b8) {
            ctx->pc = 0x3AB12Cu;
            goto label_3ab12c;
        }
    }
    ctx->pc = 0x3AB0C0u;
    // 0x3ab0c0: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3ab0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3ab0c4: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x3ab0c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x3ab0c8: 0x2455db08  addiu       $s5, $v0, -0x24F8
    ctx->pc = 0x3ab0c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957832));
    // 0x3ab0cc: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x3ab0ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x3ab0d0: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x3ab0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x3ab0d4: 0x0  nop
    ctx->pc = 0x3ab0d4u;
    // NOP
label_3ab0d8:
    // 0x3ab0d8: 0x8e24a9cc  lw          $a0, -0x5634($s1)
    ctx->pc = 0x3ab0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945228)));
    // 0x3ab0dc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ab0dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ab0e0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3ab0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ab0e4: 0x8e42a9c8  lw          $v0, -0x5638($s2)
    ctx->pc = 0x3ab0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945224)));
    // 0x3ab0e8: 0x8e23a9cc  lw          $v1, -0x5634($s1)
    ctx->pc = 0x3ab0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945228)));
    // 0x3ab0ec: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x3ab0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ab0f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ab0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ab0f4: 0xae46a9c8  sw          $a2, -0x5638($s2)
    ctx->pc = 0x3ab0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294945224), GPR_U32(ctx, 6));
    // 0x3ab0f8: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x3ab0f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x3ab0fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AB0FCu;
    {
        const bool branch_taken_0x3ab0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB0FCu;
        // 0x3ab100: 0xae23a9cc  sw          $v1, -0x5634($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294945228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab0fc) {
            ctx->pc = 0x3AB11Cu;
            goto label_3ab11c;
        }
    }
    ctx->pc = 0x3AB104u;
    // 0x3ab104: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ab104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab108: 0xc0ec09a  jal         func_3B0268
    ctx->pc = 0x3AB108u;
    SET_GPR_U32(ctx, 31, 0x3AB110u);
    ctx->pc = 0x3AB10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB108u;
    // 0x3ab10c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0268u, 0x3AB108u, 0x3AB110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB110u;
label_3ab110:
    // 0x3ab110: 0xae35a9cc  sw          $s5, -0x5634($s1)
    ctx->pc = 0x3ab110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945228), GPR_U32(ctx, 21));
    // 0x3ab114: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3AB114u;
    {
        const bool branch_taken_0x3ab114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB114u;
        // 0x3ab118: 0xae40a9c8  sw          $zero, -0x5638($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294945224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab114) {
            ctx->pc = 0x3AB0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab0b0;
        }
    }
    ctx->pc = 0x3AB11Cu;
label_3ab11c:
    // 0x3ab11c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3ab11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3ab120: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x3ab120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3ab124: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3AB124u;
    {
        const bool branch_taken_0x3ab124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB124u;
        // 0x3ab128: 0x2d01821  addu        $v1, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab124) {
            ctx->pc = 0x3AB0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab0d8;
        }
    }
    ctx->pc = 0x3AB12Cu;
label_3ab12c:
    // 0x3ab12c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ab12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab130:
    // 0x3ab130: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3ab130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ab134: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3ab134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ab138: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3ab138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ab13c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ab13cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ab140: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3ab140u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ab144: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3ab144u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ab148: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3ab148u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ab14c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ab14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab150: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB150u;
        // 0x3ab154: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB158u;
}
