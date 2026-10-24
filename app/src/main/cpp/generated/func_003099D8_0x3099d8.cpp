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

// Function: func_003099D8
// Address: 0x3099d8 - 0x309c30
void func_003099D8_0x3099d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003099D8_0x3099d8");
#endif

    switch (ctx->pc) {
        case 0x309aa8u: goto label_309aa8;
        case 0x309ab8u: goto label_309ab8;
        case 0x309bf4u: goto label_309bf4;
        default: break;
    }

    ctx->pc = 0x3099d8u;

    // 0x3099d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3099d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3099dc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3099dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3099e0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3099e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3099e4: 0x2d42003b  sltiu       $v0, $t2, 0x3B
    ctx->pc = 0x3099e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x3099e8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3099e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3099ec: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3099ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3099f0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3099f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3099f4: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3099f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3099f8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3099f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3099fc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3099fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x309a00: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x309a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x309a04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x309a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x309a08: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x309a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x309a0c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x309a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x309a10: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x309A10u;
    {
        const bool branch_taken_0x309a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A10u;
        // 0x309a14: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309a10) {
            ctx->pc = 0x309BFCu;
            goto label_309bfc;
        }
    }
    ctx->pc = 0x309A18u;
    // 0x309a18: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x309a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x309a1c: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x309a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x309a20: 0x244201f0  addiu       $v0, $v0, 0x1F0
    ctx->pc = 0x309a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    // 0x309a24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x309a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x309a28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x309a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x309a2c: 0x800008  jr          $a0
    ctx->pc = 0x309A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x309A34u: goto label_309a34;
            case 0x309A3Cu: goto label_309a3c;
            case 0x309A44u: goto label_309a44;
            case 0x309A4Cu: goto label_309a4c;
            case 0x309BFCu: goto label_309bfc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309A2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x309A34u;
label_309a34:
    // 0x309a34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x309A34u;
    {
        const bool branch_taken_0x309a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A34u;
        // 0x309a38: 0x148080  sll         $s0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309a34) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x309A3Cu;
label_309a3c:
    // 0x309a3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x309A3Cu;
    {
        const bool branch_taken_0x309a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A3Cu;
        // 0x309a40: 0x148040  sll         $s0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309a3c) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x309A44u;
label_309a44:
    // 0x309a44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x309A44u;
    {
        const bool branch_taken_0x309a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A44u;
        // 0x309a48: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309a44) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x309A4Cu;
label_309a4c:
    // 0x309a4c: 0x1417c2  srl         $v0, $s4, 31
    ctx->pc = 0x309a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
    // 0x309a50: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x309a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x309a54: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x309a54u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_309a58:
    // 0x309a58: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x309a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x309a5c: 0x2088818  mult        $s1, $s0, $t0
    ctx->pc = 0x309a5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x309a60: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x309a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x309a64: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x309A64u;
    {
        const bool branch_taken_0x309a64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x309a64) {
            ctx->pc = 0x309A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309A64u;
            // 0x309a68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x309A6Cu;
            goto label_309a6c;
        }
    }
    ctx->pc = 0x309A6Cu;
label_309a6c:
    // 0x309a6c: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x309a6cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x309a70: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x309a70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309a74: 0x1012  mflo        $v0
    ctx->pc = 0x309a74u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x309a78: 0x12200060  beqz        $s1, . + 4 + (0x60 << 2)
    ctx->pc = 0x309A78u;
    {
        const bool branch_taken_0x309a78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x309A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309A78u;
        // 0x309a7c: 0x50a818  mult        $s5, $v0, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309a78) {
            ctx->pc = 0x309BFCu;
            goto label_309bfc;
        }
    }
    ctx->pc = 0x309A80u;
    // 0x309a80: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x309a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x309a84: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x309a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x309a88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x309a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x309a8c: 0xa263c  dsll32      $a0, $t2, 24
    ctx->pc = 0x309a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 24));
    // 0x309a90: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x309a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x309a94: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x309a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x309a98: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x309a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x309a9c: 0x2476ffff  addiu       $s6, $v1, -0x1
    ctx->pc = 0x309a9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x309aa0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x309aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x309aa4: 0x0  nop
    ctx->pc = 0x309aa4u;
    // NOP
label_309aa8:
    // 0x309aa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x309aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309aac: 0x3484a000  ori         $a0, $a0, 0xA000
    ctx->pc = 0x309aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40960);
    // 0x309ab0: 0xc0e5d54  jal         func_397550
    ctx->pc = 0x309AB0u;
    SET_GPR_U32(ctx, 31, 0x309AB8u);
    ctx->pc = 0x309AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309AB0u;
    // 0x309ab4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397550u, 0x309AB0u, 0x309AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309AB8u;
label_309ab8:
    // 0x309ab8: 0x235182b  sltu        $v1, $s1, $s5
    ctx->pc = 0x309ab8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x309abc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x309ABCu;
    {
        const bool branch_taken_0x309abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x309AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309ABCu;
        // 0x309ac0: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309abc) {
            ctx->pc = 0x309AE0u;
            goto label_309ae0;
        }
    }
    ctx->pc = 0x309AC4u;
    // 0x309ac4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x309ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ac8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x309ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x309acc: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x309ACCu;
    {
        const bool branch_taken_0x309acc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x309acc) {
            ctx->pc = 0x309AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309ACCu;
            // 0x309ad0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x309AD4u;
            goto label_309ad4;
        }
    }
    ctx->pc = 0x309AD4u;
label_309ad4:
    // 0x309ad4: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x309ad4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x309ad8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x309AD8u;
    {
        const bool branch_taken_0x309ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309AD8u;
        // 0x309adc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ad8) {
            ctx->pc = 0x309AF4u;
            goto label_309af4;
        }
    }
    ctx->pc = 0x309AE0u;
label_309ae0:
    // 0x309ae0: 0x2d0001b  divu        $zero, $s6, $s0
    ctx->pc = 0x309ae0u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 22) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 22) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,22); } }
    // 0x309ae4: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x309ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ae8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x309AE8u;
    {
        const bool branch_taken_0x309ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x309ae8) {
            ctx->pc = 0x309AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309AE8u;
            // 0x309aec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x309AF0u;
            goto label_309af0;
        }
    }
    ctx->pc = 0x309AF0u;
label_309af0:
    // 0x309af0: 0x2328823  subu        $s1, $s1, $s2
    ctx->pc = 0x309af0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_309af4:
    // 0x309af4: 0x1012  mflo        $v0
    ctx->pc = 0x309af4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x309af8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x309af8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309afc: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x309afcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x309b00: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x309b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x309b04: 0x34840006  ori         $a0, $a0, 0x6
    ctx->pc = 0x309b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x309b08: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x309b08u;
    runtime->Store64(rdram, ctx, 0x70000000u, GPR_U64(ctx, 4));
    // 0x309b0c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x309b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x309b10: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x309b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x309b14: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x309b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x309b18: 0xfd400008  sd          $zero, 0x8($t2)
    ctx->pc = 0x309b18u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 0));
    // 0x309b1c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x309b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x309b20: 0x354a0010  ori         $t2, $t2, 0x10
    ctx->pc = 0x309b20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16);
    // 0x309b24: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x309b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x309b28: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x309b28u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x309b2c: 0x1e4c3c  dsll32      $t1, $fp, 16
    ctx->pc = 0x309b2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 30) << (32 + 16));
    // 0x309b30: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x309b30u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x309b34: 0x24070051  addiu       $a3, $zero, 0x51
    ctx->pc = 0x309b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x309b38: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x309b38u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x309b3c: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x309b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x309b40: 0x354a0020  ori         $t2, $t2, 0x20
    ctx->pc = 0x309b40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32);
    // 0x309b44: 0x2842025  or          $a0, $s4, $a0
    ctx->pc = 0x309b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) | GPR_U64(ctx, 4));
    // 0x309b48: 0xfd450008  sd          $a1, 0x8($t2)
    ctx->pc = 0x309b48u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 5));
    // 0x309b4c: 0x24080052  addiu       $t0, $zero, 0x52
    ctx->pc = 0x309b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x309b50: 0x2643000f  addiu       $v1, $s2, 0xF
    ctx->pc = 0x309b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x309b54: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x309b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x309b58: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x309b58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309b5c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x309b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x309b60: 0x34668000  ori         $a2, $v1, 0x8000
    ctx->pc = 0x309b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x309b64: 0x3d3f021  addu        $fp, $fp, $s3
    ctx->pc = 0x309b64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x309b68: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x309b68u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x309b6c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x309b6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x309b70: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x309b70u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x309b74: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x309b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x309b78: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x309b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x309b7c: 0x354a0030  ori         $t2, $t2, 0x30
    ctx->pc = 0x309b7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)48);
    // 0x309b80: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x309b80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x309b84: 0xfd470008  sd          $a3, 0x8($t2)
    ctx->pc = 0x309b84u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 7));
    // 0x309b88: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x309b88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x309b8c: 0xfd490000  sd          $t1, 0x0($t2)
    ctx->pc = 0x309b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 9));
    // 0x309b90: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x309b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x309b94: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x309b94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x309b98: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x309b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
    // 0x309b9c: 0x354a0040  ori         $t2, $t2, 0x40
    ctx->pc = 0x309b9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)64);
    // 0x309ba0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x309ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x309ba4: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x309ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x309ba8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x309ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x309bac: 0xfd480008  sd          $t0, 0x8($t2)
    ctx->pc = 0x309bacu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 8));
    // 0x309bb0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x309bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x309bb4: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x309bb4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x309bb8: 0x3484a000  ori         $a0, $a0, 0xA000
    ctx->pc = 0x309bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40960);
    // 0x309bbc: 0x354a0050  ori         $t2, $t2, 0x50
    ctx->pc = 0x309bbcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)80);
    // 0x309bc0: 0x2f2b821  addu        $s7, $s7, $s2
    ctx->pc = 0x309bc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x309bc4: 0xfd450008  sd          $a1, 0x8($t2)
    ctx->pc = 0x309bc4u;
    runtime->Store64(rdram, ctx, 0x70000058u, GPR_U64(ctx, 5));
    // 0x309bc8: 0xfd400000  sd          $zero, 0x0($t2)
    ctx->pc = 0x309bc8u;
    runtime->Store64(rdram, ctx, 0x70000050u, GPR_U64(ctx, 0));
    // 0x309bcc: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x309bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x309bd0: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x309bd0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x309bd4: 0x354a0060  ori         $t2, $t2, 0x60
    ctx->pc = 0x309bd4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)96);
    // 0x309bd8: 0xfd460000  sd          $a2, 0x0($t2)
    ctx->pc = 0x309bd8u;
    runtime->Store64(rdram, ctx, 0x70000060u, GPR_U64(ctx, 6));
    // 0x309bdc: 0xfd400008  sd          $zero, 0x8($t2)
    ctx->pc = 0x309bdcu;
    runtime->Store64(rdram, ctx, 0x70000068u, GPR_U64(ctx, 0));
    // 0x309be0: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x309be0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x309be4: 0x354a0070  ori         $t2, $t2, 0x70
    ctx->pc = 0x309be4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)112);
    // 0x309be8: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x309be8u;
    runtime->Store64(rdram, ctx, 0x70000070u, GPR_U64(ctx, 2));
    // 0x309bec: 0xc0e5cfa  jal         func_3973E8
    ctx->pc = 0x309BECu;
    SET_GPR_U32(ctx, 31, 0x309BF4u);
    ctx->pc = 0x309BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309BECu;
    // 0x309bf0: 0xfd400008  sd          $zero, 0x8($t2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3973E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3973E8u, 0x309BECu, 0x309BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309BF4u;
label_309bf4:
    // 0x309bf4: 0x1620ffac  bnez        $s1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x309BF4u;
    {
        const bool branch_taken_0x309bf4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x309BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309BF4u;
        // 0x309bf8: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309bf4) {
            ctx->pc = 0x309AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309aa8;
        }
    }
    ctx->pc = 0x309BFCu;
label_309bfc:
    // 0x309bfc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x309bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x309c00: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x309c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x309c04: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x309c04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x309c08: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x309c08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x309c0c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x309c0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x309c10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x309c10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x309c14: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x309c14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x309c18: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x309c18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309c1c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x309c1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309c20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x309c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309c24: 0x3e00008  jr          $ra
    ctx->pc = 0x309C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C24u;
        // 0x309c28: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309C2Cu;
    // 0x309c2c: 0x0  nop
    ctx->pc = 0x309c2cu;
    // NOP
    ctx->pc = 0x309c30u;
}
