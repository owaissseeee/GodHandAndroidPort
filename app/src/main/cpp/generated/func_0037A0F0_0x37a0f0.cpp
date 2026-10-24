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

// Function: func_0037A0F0
// Address: 0x37a0f0 - 0x37a1f0
void func_0037A0F0_0x37a0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037A0F0_0x37a0f0");
#endif

    switch (ctx->pc) {
        case 0x37a148u: goto label_37a148;
        case 0x37a19cu: goto label_37a19c;
        case 0x37a1a0u: goto label_37a1a0;
        default: break;
    }

    ctx->pc = 0x37a0f0u;

    // 0x37a0f0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x37a0f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a0f4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37a0f8: 0x81420007  lb          $v0, 0x7($t2)
    ctx->pc = 0x37a0f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 7)));
    // 0x37a0fc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x37a0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x37a100: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x37a100u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x37a104: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x37a104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x37a108: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x37a108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x37a10c: 0x84480010  lh          $t0, 0x10($v0)
    ctx->pc = 0x37a10cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x37a110: 0x19000035  blez        $t0, . + 4 + (0x35 << 2)
    ctx->pc = 0x37A110u;
    {
        const bool branch_taken_0x37a110 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x37A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A110u;
        // 0x37a114: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a110) {
            ctx->pc = 0x37A1E8u;
            goto label_37a1e8;
        }
    }
    ctx->pc = 0x37A118u;
    // 0x37a118: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x37a118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x37a11c: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x37a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x37a120: 0x25c00  sll         $t3, $v0, 16
    ctx->pc = 0x37a120u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a124: 0x2479df10  addiu       $t9, $v1, -0x20F0
    ctx->pc = 0x37a124u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958864));
    // 0x37a128: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37a128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37a12c: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x37a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x37a130: 0x2458e510  addiu       $t8, $v0, -0x1AF0
    ctx->pc = 0x37a130u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x37a134: 0x246fea50  addiu       $t7, $v1, -0x15B0
    ctx->pc = 0x37a134u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961744));
    // 0x37a138: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x37a138u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a13c: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x37a13cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a140: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x37a140u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    // 0x37a144: 0x3c0c0001  lui         $t4, 0x1
    ctx->pc = 0x37a144u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1 << 16));
label_37a148:
    // 0x37a148: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x37a148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37a14c: 0xb2403  sra         $a0, $t3, 16
    ctx->pc = 0x37a14cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 11), 16));
    // 0x37a150: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x37a150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x37a154: 0x81470007  lb          $a3, 0x7($t2)
    ctx->pc = 0x37a154u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 7)));
    // 0x37a158: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x37a158u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x37a15c: 0xa8182a  slt         $v1, $a1, $t0
    ctx->pc = 0x37a15cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x37a160: 0x10ee0013  beq         $a3, $t6, . + 4 + (0x13 << 2)
    ctx->pc = 0x37A160u;
    {
        const bool branch_taken_0x37a160 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 14));
        ctx->pc = 0x37A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A160u;
        // 0x37a164: 0x3280a  movz        $a1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a160) {
            ctx->pc = 0x37A1B0u;
            goto label_37a1b0;
        }
    }
    ctx->pc = 0x37A168u;
    // 0x37a168: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x37a168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x37a16c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37A16Cu;
    {
        const bool branch_taken_0x37a16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a16c) {
            ctx->pc = 0x37A184u;
            goto label_37a184;
        }
    }
    ctx->pc = 0x37A174u;
    // 0x37a174: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x37A174u;
    {
        const bool branch_taken_0x37a174 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A174u;
        // 0x37a178: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a174) {
            ctx->pc = 0x37A194u;
            goto label_37a194;
        }
    }
    ctx->pc = 0x37A17Cu;
    // 0x37a17c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x37A17Cu;
    {
        const bool branch_taken_0x37a17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A17Cu;
        // 0x37a180: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a17c) {
            ctx->pc = 0x37A1D0u;
            goto label_37a1d0;
        }
    }
    ctx->pc = 0x37A184u;
label_37a184:
    // 0x37a184: 0x10ed000d  beq         $a3, $t5, . + 4 + (0xD << 2)
    ctx->pc = 0x37A184u;
    {
        const bool branch_taken_0x37a184 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 13));
        ctx->pc = 0x37A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A184u;
        // 0x37a188: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a184) {
            ctx->pc = 0x37A1BCu;
            goto label_37a1bc;
        }
    }
    ctx->pc = 0x37A18Cu;
    // 0x37a18c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x37A18Cu;
    {
        const bool branch_taken_0x37a18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A18Cu;
        // 0x37a190: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a18c) {
            ctx->pc = 0x37A1D0u;
            goto label_37a1d0;
        }
    }
    ctx->pc = 0x37A194u;
label_37a194:
    // 0x37a194: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x37a194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x37a198: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x37a198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
label_37a19c:
    // 0x37a19c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37a1a0:
    // 0x37a1a0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x37A1A0u;
    {
        const bool branch_taken_0x37a1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A1A0u;
        // 0x37a1a4: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a1a0) {
            ctx->pc = 0x37A1CCu;
            goto label_37a1cc;
        }
    }
    ctx->pc = 0x37A1A8u;
    // 0x37a1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x37A1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A1A8u;
        // 0x37a1ac: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A1B0u;
label_37a1b0:
    // 0x37a1b0: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x37a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x37a1b4: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x37A1B4u;
    {
        const bool branch_taken_0x37a1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A1B4u;
        // 0x37a1b8: 0x581021  addu        $v0, $v0, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a1b4) {
            ctx->pc = 0x37A19Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a19c;
        }
    }
    ctx->pc = 0x37A1BCu;
label_37a1bc:
    // 0x37a1bc: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x37a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x37a1c0: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x37a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x37a1c4: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x37A1C4u;
    {
        const bool branch_taken_0x37a1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A1C4u;
        // 0x37a1c8: 0x8c430014  lw          $v1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a1c4) {
            ctx->pc = 0x37A1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a1a0;
        }
    }
    ctx->pc = 0x37A1CCu;
label_37a1cc:
    // 0x37a1cc: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x37a1ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_37a1d0:
    // 0x37a1d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a1d4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x37a1d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x37a1d8: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x37a1d8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x37a1dc: 0x68182a  slt         $v1, $v1, $t0
    ctx->pc = 0x37a1dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x37a1e0: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x37A1E0u;
    {
        const bool branch_taken_0x37a1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A1E0u;
        // 0x37a1e4: 0x12c4821  addu        $t1, $t1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a1e0) {
            ctx->pc = 0x37A148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a148;
        }
    }
    ctx->pc = 0x37A1E8u;
label_37a1e8:
    // 0x37a1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x37A1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A1E8u;
        // 0x37a1ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A1F0u;
}
