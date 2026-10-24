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

// Function: viBufReset
// Address: 0x355988 - 0x355ac8
void viBufReset_0x355988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufReset_0x355988");
#endif

    switch (ctx->pc) {
        case 0x3559d0u: goto label_3559d0;
        case 0x355a10u: goto label_355a10;
        case 0x355a38u: goto label_355a38;
        case 0x355a6cu: goto label_355a6c;
        case 0x355aa8u: goto label_355aa8;
        default: break;
    }

    ctx->pc = 0x355988u;

    // 0x355988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35598c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355990: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x355990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x355994: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x355994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355998: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x355998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35599c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35599cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3559a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3559a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3559a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3559a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3559a8: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x3559a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x3559ac: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3559acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3559b0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3559b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x3559b4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3559b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x3559b8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x3559b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x3559bc: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x3559bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x3559c0: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3559C0u;
    {
        const bool branch_taken_0x3559c0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3559C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3559C0u;
        // 0x3559c4: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3559c0) {
            ctx->pc = 0x3559F4u;
            goto label_3559f4;
        }
    }
    ctx->pc = 0x3559C8u;
    // 0x3559c8: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x3559c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3559cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3559ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3559d0:
    // 0x3559d0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x3559d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x3559d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3559d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3559d8: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x3559d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x3559dc: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x3559dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x3559e0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3559e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3559e4: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x3559e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x3559e8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3559e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3559ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3559ECu;
    {
        const bool branch_taken_0x3559ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3559F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3559ECu;
        // 0x3559f0: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3559ec) {
            ctx->pc = 0x3559D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3559d0;
        }
    }
    ctx->pc = 0x3559F4u;
label_3559f4:
    // 0x3559f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3559f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3559f8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3559F8u;
    {
        const bool branch_taken_0x3559f8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3559FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3559F8u;
        // 0x3559fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3559f8) {
            ctx->pc = 0x355A48u;
            goto label_355a48;
        }
    }
    ctx->pc = 0x355A00u;
    // 0x355a00: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x355a00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x355a04: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x355a04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x355a08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x355a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x355a0c: 0x0  nop
    ctx->pc = 0x355a0cu;
    // NOP
label_355a10:
    // 0x355a10: 0x122ac0  sll         $a1, $s2, 11
    ctx->pc = 0x355a10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x355a14: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x355a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x355a18: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x355a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x355a1c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x355a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x355a20: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x355a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x355a24: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x355a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x355a28: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x355a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x355a2c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x355a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x355a30: 0xc0d563a  jal         func_3558E8
    ctx->pc = 0x355A30u;
    SET_GPR_U32(ctx, 31, 0x355A38u);
    ctx->pc = 0x355A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355A30u;
    // 0x355a34: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3558E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3558E8u, 0x355A30u, 0x355A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355A38u;
label_355a38:
    // 0x355a38: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x355a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x355a3c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x355a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x355a40: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x355A40u;
    {
        const bool branch_taken_0x355a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355a40) {
            ctx->pc = 0x355A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355A40u;
            // 0x355a44: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355a10;
        }
    }
    ctx->pc = 0x355A48u;
label_355a48:
    // 0x355a48: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x355a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x355a4c: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x355a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x355a50: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x355a50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x355a54: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x355a54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x355a58: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x355a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x355a5c: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x355a5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x355a60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x355a60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a64: 0xc0d563a  jal         func_3558E8
    ctx->pc = 0x355A64u;
    SET_GPR_U32(ctx, 31, 0x355A6Cu);
    ctx->pc = 0x355A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355A64u;
    // 0x355a68: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3558E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3558E8u, 0x355A64u, 0x355A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355A6Cu;
label_355a6c:
    // 0x355a6c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x355a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x355a70: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x355a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x355a74: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x355a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x355a78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x355a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x355a7c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x355a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x355a80: 0xd03024  and         $a2, $a2, $s0
    ctx->pc = 0x355a80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
    // 0x355a84: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x355a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x355a88: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x355a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x355a8c: 0x34a5b430  ori         $a1, $a1, 0xB430
    ctx->pc = 0x355a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46128);
    // 0x355a90: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x355a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x355a94: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x355a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x355a98: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x355a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x355a9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x355a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x355aa0: 0xc0d5620  jal         func_355880
    ctx->pc = 0x355AA0u;
    SET_GPR_U32(ctx, 31, 0x355AA8u);
    ctx->pc = 0x355AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355AA0u;
    // 0x355aa4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355880u, 0x355AA0u, 0x355AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355AA8u;
label_355aa8:
    // 0x355aa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355aac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x355aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355ab0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x355ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x355ab4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x355ab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355ab8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x355ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355abc: 0x3e00008  jr          $ra
    ctx->pc = 0x355ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355ABCu;
        // 0x355ac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355AC4u;
    // 0x355ac4: 0x0  nop
    ctx->pc = 0x355ac4u;
    // NOP
    ctx->pc = 0x355ac8u;
}
