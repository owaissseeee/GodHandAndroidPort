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

// Function: SetNextComp
// Address: 0x3b6c28 - 0x3b6db8
void SetNextComp_0x3b6c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNextComp_0x3b6c28");
#endif

    switch (ctx->pc) {
        case 0x3b6c70u: goto label_3b6c70;
        case 0x3b6cd8u: goto label_3b6cd8;
        case 0x3b6d44u: goto label_3b6d44;
        case 0x3b6d78u: goto label_3b6d78;
        default: break;
    }

    ctx->pc = 0x3b6c28u;

    // 0x3b6c28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b6c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b6c2c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b6c30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b6c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b6c34: 0x2442be90  addiu       $v0, $v0, -0x4170
    ctx->pc = 0x3b6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950544));
    // 0x3b6c38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b6c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b6c3c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3b6c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6c40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b6c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b6c44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b6c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b6c48: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3b6c48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBEACu));
    // 0x3b6c4c: 0x4610054  bgez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x3B6C4Cu;
    {
        const bool branch_taken_0x3b6c4c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3B6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6C4Cu;
        // 0x3b6c50: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6c4c) {
            ctx->pc = 0x3B6DA0u;
            goto label_3b6da0;
        }
    }
    ctx->pc = 0x3B6C54u;
    // 0x3b6c54: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3b6c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3b6c58: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x3b6c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x3b6c5c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3b6c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u));
    // 0x3b6c60: 0x54c0000c  bnel        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3B6C60u;
    {
        const bool branch_taken_0x3b6c60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6c60) {
            ctx->pc = 0x3B6C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6C60u;
            // 0x3b6c64: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6C94u;
            goto label_3b6c94;
        }
    }
    ctx->pc = 0x3B6C68u;
    // 0x3b6c68: 0xc0eda88  jal         func_3B6A20
    ctx->pc = 0x3B6C68u;
    SET_GPR_U32(ctx, 31, 0x3B6C70u);
    ctx->pc = 0x3B6C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6C68u;
    // 0x3b6c6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6A20u, 0x3B6C68u, 0x3B6C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6C70u;
label_3b6c70:
    // 0x3b6c70: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3b6c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3b6c74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b6c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b6c78: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x3b6c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x3b6c7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b6c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6c80: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x3b6c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x3b6c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b6c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6c88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b6c88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b6c8c: 0x80eda84  j           func_3B6A10
    ctx->pc = 0x3B6C8Cu;
    ctx->pc = 0x3B6C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6C8Cu;
    // 0x3b6c90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6A10u, 0x3B6C8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B6C94u;
label_3b6c94:
    // 0x3b6c94: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x3b6c94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3b6c98: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x3b6c98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3b6c9c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3b6c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3b6ca0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3b6ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b6ca4: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x3B6CA4u;
    {
        const bool branch_taken_0x3b6ca4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6CA4u;
        // 0x3b6ca8: 0x44802f  dsubu       $s0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6ca4) {
            ctx->pc = 0x3B6D0Cu;
            goto label_3b6d0c;
        }
    }
    ctx->pc = 0x3B6CACu;
    // 0x3b6cac: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x3b6cacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3b6cb0: 0x66037333  daddiu      $v1, $s0, 0x7333
    ctx->pc = 0x3b6cb0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
    // 0x3b6cb4: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x3b6cb4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3b6cb8: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x3b6cb8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3b6cbc: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3b6cbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3b6cc0: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x3b6cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x3b6cc4: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3b6cc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3b6cc8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B6CC8u;
    {
        const bool branch_taken_0x3b6cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6CC8u;
        // 0x3b6ccc: 0x32510003  andi        $s1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6cc8) {
            ctx->pc = 0x3B6D0Cu;
            goto label_3b6d0c;
        }
    }
    ctx->pc = 0x3B6CD0u;
    // 0x3b6cd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b6cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6cd4: 0x0  nop
    ctx->pc = 0x3b6cd4u;
    // NOP
label_3b6cd8:
    // 0x3b6cd8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3b6cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b6cdc: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x3B6CDCu;
    {
        const bool branch_taken_0x3b6cdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6CDCu;
        // 0x3b6ce0: 0x66037333  daddiu      $v1, $s0, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6cdc) {
            ctx->pc = 0x3B6D10u;
            goto label_3b6d10;
        }
    }
    ctx->pc = 0x3B6CE4u;
    // 0x3b6ce4: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x3b6ce4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3b6ce8: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x3b6ce8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3b6cec: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x3b6cecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3b6cf0: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3b6cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3b6cf4: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x3b6cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x3b6cf8: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3b6cf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3b6cfc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B6CFCu;
    {
        const bool branch_taken_0x3b6cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6cfc) {
            ctx->pc = 0x3B6D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6CFCu;
            // 0x3b6d00: 0x207102f  dsubu       $v0, $s0, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6D14u;
            goto label_3b6d14;
        }
    }
    ctx->pc = 0x3B6D04u;
    // 0x3b6d04: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x3B6D04u;
    {
        const bool branch_taken_0x3b6d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D04u;
        // 0x3b6d08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6d04) {
            ctx->pc = 0x3B6CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6cd8;
        }
    }
    ctx->pc = 0x3B6D0Cu;
label_3b6d0c:
    // 0x3b6d0c: 0x32510003  andi        $s1, $s2, 0x3
    ctx->pc = 0x3b6d0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_3b6d10:
    // 0x3b6d10: 0x207102f  dsubu       $v0, $s0, $a3
    ctx->pc = 0x3b6d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
label_3b6d14:
    // 0x3b6d14: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x3b6d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x3b6d18: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B6D18u;
    {
        const bool branch_taken_0x3b6d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D18u;
        // 0x3b6d1c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6d18) {
            ctx->pc = 0x3B6D68u;
            goto label_3b6d68;
        }
    }
    ctx->pc = 0x3B6D20u;
    // 0x3b6d20: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x3b6d20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3b6d24: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3b6d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x3b6d28: 0x24047333  addiu       $a0, $zero, 0x7333
    ctx->pc = 0x3b6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x3b6d2c: 0xa42016  dsrlv       $a0, $a0, $a1
    ctx->pc = 0x3b6d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x3b6d30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b6d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6d34: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3b6d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3b6d38: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3b6d38u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3b6d3c: 0xc0eda88  jal         func_3B6A20
    ctx->pc = 0x3B6D3Cu;
    SET_GPR_U32(ctx, 31, 0x3B6D44u);
    ctx->pc = 0x3B6D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6D3Cu;
    // 0x3b6d40: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6A20u, 0x3B6D3Cu, 0x3B6D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6D44u;
label_3b6d44:
    // 0x3b6d44: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3b6d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3b6d48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b6d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b6d4c: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x3b6d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x3b6d50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b6d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6d54: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x3b6d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x3b6d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b6d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6d5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b6d5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b6d60: 0x80eda84  j           func_3B6A10
    ctx->pc = 0x3B6D60u;
    ctx->pc = 0x3B6D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6D60u;
    // 0x3b6d64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6A10u, 0x3B6D60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B6D68u;
label_3b6d68:
    // 0x3b6d68: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3b6d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3b6d6c: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x3b6d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x3b6d70: 0xc0eda84  jal         func_3B6A10
    ctx->pc = 0x3B6D70u;
    SET_GPR_U32(ctx, 31, 0x3B6D78u);
    ctx->pc = 0x3B6D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6D70u;
    // 0x3b6d74: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6A10u, 0x3B6D70u, 0x3B6D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6D78u;
label_3b6d78:
    // 0x3b6d78: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3b6d78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3b6d7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b6d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b6d80: 0x902016  dsrlv       $a0, $s0, $a0
    ctx->pc = 0x3b6d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x3b6d84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b6d84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b6d88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b6d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6d8c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3b6d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3b6d90: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3b6d90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3b6d94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b6d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6d98: 0x80eda88  j           func_3B6A20
    ctx->pc = 0x3B6D98u;
    ctx->pc = 0x3B6D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6D98u;
    // 0x3b6d9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6A20u, 0x3B6D98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B6DA0u;
label_3b6da0:
    // 0x3b6da0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b6da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b6da4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b6da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b6da8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b6da8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6dac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b6dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6db0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6DB0u;
        // 0x3b6db4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6DB8u;
}
