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

// Function: scePadInfoMode
// Address: 0x397f38 - 0x398070
void scePadInfoMode_0x397f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadInfoMode_0x397f38");
#endif

    switch (ctx->pc) {
        case 0x397f88u: goto label_397f88;
        default: break;
    }

    ctx->pc = 0x397f38u;

    // 0x397f38: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x397f38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f3c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x397f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x397f40: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x397f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x397f44: 0x71031818  mult1       $v1, $t0, $v1
    ctx->pc = 0x397f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x397f48: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x397f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x397f4c: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x397f4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x397f50: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x397f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x397f54: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x397f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x397f58: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x397f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x397f5c: 0x2442c110  addiu       $v0, $v0, -0x3EF0
    ctx->pc = 0x397f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951184));
    // 0x397f60: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x397f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x397f64: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x397f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f68: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x397f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x397f6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x397f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x397f70: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x397f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x397f74: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x397F74u;
    {
        const bool branch_taken_0x397f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x397F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F74u;
        // 0x397f78: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397f74) {
            ctx->pc = 0x398054u;
            goto label_398054;
        }
    }
    ctx->pc = 0x397F7Cu;
    // 0x397f7c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x397f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f80: 0xc0e5ef2  jal         func_397BC8
    ctx->pc = 0x397F80u;
    SET_GPR_U32(ctx, 31, 0x397F88u);
    ctx->pc = 0x397F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397F80u;
    // 0x397f84: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397BC8u, 0x397F80u, 0x397F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397F88u;
label_397f88:
    // 0x397f88: 0x93a30072  lbu         $v1, 0x72($sp)
    ctx->pc = 0x397f88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 114)));
    // 0x397f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x397f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397f90: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x397F90u;
    {
        const bool branch_taken_0x397f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x397F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F90u;
        // 0x397f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397f90) {
            ctx->pc = 0x398058u;
            goto label_398058;
        }
    }
    ctx->pc = 0x397F98u;
    // 0x397f98: 0x93a20071  lbu         $v0, 0x71($sp)
    ctx->pc = 0x397f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 113)));
    // 0x397f9c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x397f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397fa0: 0x1044002d  beq         $v0, $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x397FA0u;
    {
        const bool branch_taken_0x397fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x397FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FA0u;
        // 0x397fa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397fa0) {
            ctx->pc = 0x398058u;
            goto label_398058;
        }
    }
    ctx->pc = 0x397FA8u;
    // 0x397fa8: 0x12040013  beq         $s0, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x397FA8u;
    {
        const bool branch_taken_0x397fa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x397FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FA8u;
        // 0x397fac: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x397fa8) {
            ctx->pc = 0x397FF8u;
            goto label_397ff8;
        }
    }
    ctx->pc = 0x397FB0u;
    // 0x397fb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x397FB0u;
    {
        const bool branch_taken_0x397fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FB0u;
        // 0x397fb4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397fb0) {
            ctx->pc = 0x397FC8u;
            goto label_397fc8;
        }
    }
    ctx->pc = 0x397FB8u;
    // 0x397fb8: 0x12030009  beq         $s0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x397FB8u;
    {
        const bool branch_taken_0x397fb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x397FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FB8u;
        // 0x397fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397fb8) {
            ctx->pc = 0x397FE0u;
            goto label_397fe0;
        }
    }
    ctx->pc = 0x397FC0u;
    // 0x397fc0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x397FC0u;
    {
        const bool branch_taken_0x397fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FC0u;
        // 0x397fc4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397fc0) {
            ctx->pc = 0x39805Cu;
            goto label_39805c;
        }
    }
    ctx->pc = 0x397FC8u;
label_397fc8:
    // 0x397fc8: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x397FC8u;
    {
        const bool branch_taken_0x397fc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x397FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FC8u;
        // 0x397fcc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397fc8) {
            ctx->pc = 0x39800Cu;
            goto label_39800c;
        }
    }
    ctx->pc = 0x397FD0u;
    // 0x397fd0: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x397FD0u;
    {
        const bool branch_taken_0x397fd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x397FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FD0u;
        // 0x397fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397fd0) {
            ctx->pc = 0x398020u;
            goto label_398020;
        }
    }
    ctx->pc = 0x397FD8u;
    // 0x397fd8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x397FD8u;
    {
        const bool branch_taken_0x397fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FD8u;
        // 0x397fdc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397fd8) {
            ctx->pc = 0x39805Cu;
            goto label_39805c;
        }
    }
    ctx->pc = 0x397FE0u;
label_397fe0:
    // 0x397fe0: 0x93a30065  lbu         $v1, 0x65($sp)
    ctx->pc = 0x397fe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 101)));
    // 0x397fe4: 0x240200f3  addiu       $v0, $zero, 0xF3
    ctx->pc = 0x397fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x397fe8: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x397FE8u;
    {
        const bool branch_taken_0x397fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x397FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FE8u;
        // 0x397fec: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397fe8) {
            ctx->pc = 0x398054u;
            goto label_398054;
        }
    }
    ctx->pc = 0x397FF0u;
    // 0x397ff0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x397FF0u;
    {
        const bool branch_taken_0x397ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FF0u;
        // 0x397ff4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397ff0) {
            ctx->pc = 0x39805Cu;
            goto label_39805c;
        }
    }
    ctx->pc = 0x397FF8u;
label_397ff8:
    // 0x397ff8: 0x93a20064  lbu         $v0, 0x64($sp)
    ctx->pc = 0x397ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x397ffc: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x397FFCu;
    {
        const bool branch_taken_0x397ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x398000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FFCu;
        // 0x398000: 0x93a20069  lbu         $v0, 0x69($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 105)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397ffc) {
            ctx->pc = 0x398054u;
            goto label_398054;
        }
    }
    ctx->pc = 0x398004u;
    // 0x398004: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x398004u;
    {
        const bool branch_taken_0x398004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398004u;
        // 0x398008: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398004) {
            ctx->pc = 0x398048u;
            goto label_398048;
        }
    }
    ctx->pc = 0x39800Cu;
label_39800c:
    // 0x39800c: 0x93a20064  lbu         $v0, 0x64($sp)
    ctx->pc = 0x39800cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x398010: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x398010u;
    {
        const bool branch_taken_0x398010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x398014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398010u;
        // 0x398014: 0x93a20069  lbu         $v0, 0x69($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 105)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398010) {
            ctx->pc = 0x398054u;
            goto label_398054;
        }
    }
    ctx->pc = 0x398018u;
    // 0x398018: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x398018u;
    {
        const bool branch_taken_0x398018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398018u;
        // 0x39801c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398018) {
            ctx->pc = 0x39805Cu;
            goto label_39805c;
        }
    }
    ctx->pc = 0x398020u;
label_398020:
    // 0x398020: 0x93a20064  lbu         $v0, 0x64($sp)
    ctx->pc = 0x398020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x398024: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x398024u;
    {
        const bool branch_taken_0x398024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x398028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398024u;
        // 0x398028: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398024) {
            ctx->pc = 0x398054u;
            goto label_398054;
        }
    }
    ctx->pc = 0x39802Cu;
    // 0x39802c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39802Cu;
    {
        const bool branch_taken_0x39802c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x398030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39802Cu;
        // 0x398030: 0x93a20068  lbu         $v0, 0x68($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39802c) {
            ctx->pc = 0x39803Cu;
            goto label_39803c;
        }
    }
    ctx->pc = 0x398034u;
    // 0x398034: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x398034u;
    {
        const bool branch_taken_0x398034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398034u;
        // 0x398038: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398034) {
            ctx->pc = 0x39805Cu;
            goto label_39805c;
        }
    }
    ctx->pc = 0x39803Cu;
label_39803c:
    // 0x39803c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x39803cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x398040: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x398040u;
    {
        const bool branch_taken_0x398040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398040u;
        // 0x398044: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398040) {
            ctx->pc = 0x398054u;
            goto label_398054;
        }
    }
    ctx->pc = 0x398048u;
label_398048:
    // 0x398048: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x398048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x39804c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39804Cu;
    {
        const bool branch_taken_0x39804c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39804Cu;
        // 0x398050: 0x94620050  lhu         $v0, 0x50($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39804c) {
            ctx->pc = 0x398058u;
            goto label_398058;
        }
    }
    ctx->pc = 0x398054u;
label_398054:
    // 0x398054: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x398054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398058:
    // 0x398058: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x398058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_39805c:
    // 0x39805c: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x39805cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x398060: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x398060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x398064: 0x3e00008  jr          $ra
    ctx->pc = 0x398064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398064u;
        // 0x398068: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39806Cu;
    // 0x39806c: 0x0  nop
    ctx->pc = 0x39806cu;
    // NOP
    ctx->pc = 0x398070u;
}
