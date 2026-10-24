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

// Function: func_0032D430
// Address: 0x32d430 - 0x32d6f0
void func_0032D430_0x32d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032D430_0x32d430");
#endif

    switch (ctx->pc) {
        case 0x32d478u: goto label_32d478;
        case 0x32d498u: goto label_32d498;
        case 0x32d4f4u: goto label_32d4f4;
        case 0x32d570u: goto label_32d570;
        case 0x32d598u: goto label_32d598;
        case 0x32d5c0u: goto label_32d5c0;
        case 0x32d634u: goto label_32d634;
        case 0x32d64cu: goto label_32d64c;
        case 0x32d660u: goto label_32d660;
        case 0x32d67cu: goto label_32d67c;
        case 0x32d6c8u: goto label_32d6c8;
        default: break;
    }

    ctx->pc = 0x32d430u;

    // 0x32d430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32d430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32d434: 0x2407ffc0  addiu       $a3, $zero, -0x40
    ctx->pc = 0x32d434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x32d438: 0x24a3003f  addiu       $v1, $a1, 0x3F
    ctx->pc = 0x32d438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x32d43c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32d43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32d440: 0x679824  and         $s3, $v1, $a3
    ctx->pc = 0x32d440u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x32d444: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32d444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32d448: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x32d448u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x32d44c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x32d44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x32d450: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d454: 0xc29023  subu        $s2, $a2, $v0
    ctx->pc = 0x32d454u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x32d458: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32d458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32d45c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x32d45cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d460: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x32d460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x32d464: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32D464u;
    {
        const bool branch_taken_0x32d464 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D464u;
        // 0x32d468: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d464) {
            ctx->pc = 0x32D480u;
            goto label_32d480;
        }
    }
    ctx->pc = 0x32D46Cu;
    // 0x32d46c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32d46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32d470: 0xc0cff2c  jal         func_33FCB0
    ctx->pc = 0x32D470u;
    SET_GPR_U32(ctx, 31, 0x32D478u);
    ctx->pc = 0x32D474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D470u;
    // 0x32d474: 0x248429d0  addiu       $a0, $a0, 0x29D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32D470u, 0x32D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D478u;
label_32d478:
    // 0x32d478: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x32D478u;
    {
        const bool branch_taken_0x32d478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D478u;
        // 0x32d47c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d478) {
            ctx->pc = 0x32D6CCu;
            goto label_32d6cc;
        }
    }
    ctx->pc = 0x32D480u;
label_32d480:
    // 0x32d480: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x32d480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x32d484: 0x24831488  addiu       $v1, $a0, 0x1488
    ctx->pc = 0x32d484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5256));
    // 0x32d488: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x32d488u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x3D1488u));
    // 0x32d48c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32D48Cu;
    {
        const bool branch_taken_0x32d48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D48Cu;
        // 0x32d490: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d48c) {
            ctx->pc = 0x32D4BCu;
            goto label_32d4bc;
        }
    }
    ctx->pc = 0x32D494u;
    // 0x32d494: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x32d494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_32d498:
    // 0x32d498: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x32d498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32d49c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D49Cu;
    {
        const bool branch_taken_0x32d49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D49Cu;
        // 0x32d4a0: 0x24630278  addiu       $v1, $v1, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d49c) {
            ctx->pc = 0x32D4BCu;
            goto label_32d4bc;
        }
    }
    ctx->pc = 0x32D4A4u;
    // 0x32d4a4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x32d4a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32d4a8: 0x0  nop
    ctx->pc = 0x32d4a8u;
    // NOP
    // 0x32d4ac: 0x0  nop
    ctx->pc = 0x32d4acu;
    // NOP
    // 0x32d4b0: 0x0  nop
    ctx->pc = 0x32d4b0u;
    // NOP
    // 0x32d4b4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32D4B4u;
    {
        const bool branch_taken_0x32d4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d4b4) {
            ctx->pc = 0x32D4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D4B4u;
            // 0x32d4b8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d498;
        }
    }
    ctx->pc = 0x32D4BCu;
label_32d4bc:
    // 0x32d4bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32d4c0: 0x10e30082  beq         $a3, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x32D4C0u;
    {
        const bool branch_taken_0x32d4c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x32D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D4C0u;
        // 0x32d4c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d4c0) {
            ctx->pc = 0x32D6CCu;
            goto label_32d6cc;
        }
    }
    ctx->pc = 0x32D4C8u;
    // 0x32d4c8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x32d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x32d4cc: 0x24831488  addiu       $v1, $a0, 0x1488
    ctx->pc = 0x32d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5256));
    // 0x32d4d0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x32d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x32d4d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32d4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d4d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32d4dc: 0x24060278  addiu       $a2, $zero, 0x278
    ctx->pc = 0x32d4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    // 0x32d4e0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x32d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x32d4e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32d4e8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x32d4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32d4ec: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x32D4ECu;
    SET_GPR_U32(ctx, 31, 0x32D4F4u);
    ctx->pc = 0x32D4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D4ECu;
    // 0x32d4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x32D4ECu, 0x32D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D4F4u;
label_32d4f4:
    // 0x32d4f4: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x32d4f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x32d4f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d4fc: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x32d4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x32d500: 0x92a20004  lbu         $v0, 0x4($s5)
    ctx->pc = 0x32d500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x32d504: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x32d504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x32d508: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x32d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x32d50c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x32d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x32d510: 0xae0201a0  sw          $v0, 0x1A0($s0)
    ctx->pc = 0x32d510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 2));
    // 0x32d514: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x32d514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x32d518: 0xae03026c  sw          $v1, 0x26C($s0)
    ctx->pc = 0x32d518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 3));
    // 0x32d51c: 0xae0201a4  sw          $v0, 0x1A4($s0)
    ctx->pc = 0x32d51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
    // 0x32d520: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x32d520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x32d524: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32D524u;
    {
        const bool branch_taken_0x32d524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x32d524) {
            ctx->pc = 0x32D528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D524u;
            // 0x32d528: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D540u;
            goto label_32d540;
        }
    }
    ctx->pc = 0x32D52Cu;
    // 0x32d52c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x32d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x32d530: 0x340285c0  ori         $v0, $zero, 0x85C0
    ctx->pc = 0x32d530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34240);
    // 0x32d534: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x32D534u;
    {
        const bool branch_taken_0x32d534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D534u;
        // 0x32d538: 0x628818  mult        $s1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d534) {
            ctx->pc = 0x32D560u;
            goto label_32d560;
        }
    }
    ctx->pc = 0x32D53Cu;
    // 0x32d53c: 0x0  nop
    ctx->pc = 0x32d53cu;
    // NOP
label_32d540:
    // 0x32d540: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x32d540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x32d544: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x32d544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x32d548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32d548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32d54c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32d550: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32d550u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32d554: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x32d554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x32d558: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x32d558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x32d55c: 0x448818  mult        $s1, $v0, $a0
    ctx->pc = 0x32d55cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_32d560:
    // 0x32d560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d564: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32d564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d568: 0xc0cbb5c  jal         func_32ED70
    ctx->pc = 0x32D568u;
    SET_GPR_U32(ctx, 31, 0x32D570u);
    ctx->pc = 0x32D56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D568u;
    // 0x32d56c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED70u, 0x32D568u, 0x32D570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D570u;
label_32d570:
    // 0x32d570: 0x4400053  bltz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x32D570u;
    {
        const bool branch_taken_0x32d570 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D570u;
        // 0x32d574: 0x2519023  subu        $s2, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d570) {
            ctx->pc = 0x32D6C0u;
            goto label_32d6c0;
        }
    }
    ctx->pc = 0x32D578u;
    // 0x32d578: 0x6400051  bltz        $s2, . + 4 + (0x51 << 2)
    ctx->pc = 0x32D578u;
    {
        const bool branch_taken_0x32d578 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x32D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D578u;
        // 0x32d57c: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d578) {
            ctx->pc = 0x32D6C0u;
            goto label_32d6c0;
        }
    }
    ctx->pc = 0x32D580u;
    // 0x32d580: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x32d580u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x32d584: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32D584u;
    {
        const bool branch_taken_0x32d584 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x32D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D584u;
        // 0x32d588: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d584) {
            ctx->pc = 0x32D5E0u;
            goto label_32d5e0;
        }
    }
    ctx->pc = 0x32D58Cu;
    // 0x32d58c: 0x26110120  addiu       $s1, $s0, 0x120
    ctx->pc = 0x32d58cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x32d590: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x32d590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x32d594: 0x0  nop
    ctx->pc = 0x32d594u;
    // NOP
label_32d598:
    // 0x32d598: 0x8e0301a4  lw          $v1, 0x1A4($s0)
    ctx->pc = 0x32d598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x32d59c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32d59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d5a0: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x32d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x32d5a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32d5a8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x32d5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d5ac: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x32d5acu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x32d5b0: 0x6400043  bltz        $s2, . + 4 + (0x43 << 2)
    ctx->pc = 0x32D5B0u;
    {
        const bool branch_taken_0x32d5b0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x32D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D5B0u;
        // 0x32d5b4: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d5b0) {
            ctx->pc = 0x32D6C0u;
            goto label_32d6c0;
        }
    }
    ctx->pc = 0x32D5B8u;
    // 0x32d5b8: 0xc0ce568  jal         func_3395A0
    ctx->pc = 0x32D5B8u;
    SET_GPR_U32(ctx, 31, 0x32D5C0u);
    ctx->pc = 0x32D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D5B8u;
    // 0x32d5bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395A0u, 0x32D5B8u, 0x32D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D5C0u;
label_32d5c0:
    // 0x32d5c0: 0xae22ff74  sw          $v0, -0x8C($s1)
    ctx->pc = 0x32d5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967156), GPR_U32(ctx, 2));
    // 0x32d5c4: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x32D5C4u;
    {
        const bool branch_taken_0x32d5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D5C4u;
        // 0x32d5c8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d5c4) {
            ctx->pc = 0x32D6C0u;
            goto label_32d6c0;
        }
    }
    ctx->pc = 0x32D5CCu;
    // 0x32d5cc: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x32d5ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x32d5d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x32d5d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x32d5d4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x32d5d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32d5d8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x32D5D8u;
    {
        const bool branch_taken_0x32d5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d5d8) {
            ctx->pc = 0x32D5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D5D8u;
            // 0x32d5dc: 0x8e0201a0  lw          $v0, 0x1A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d598;
        }
    }
    ctx->pc = 0x32D5E0u;
label_32d5e0:
    // 0x32d5e0: 0x2643df00  addiu       $v1, $s2, -0x2100
    ctx->pc = 0x32d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958848));
    // 0x32d5e4: 0x2645e6ff  addiu       $a1, $s2, -0x1901
    ctx->pc = 0x32d5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960895));
    // 0x32d5e8: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x32d5e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x32d5ec: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x32d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x32d5f0: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x32d5f0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x32d5f4: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x32d5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    // 0x32d5f8: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x32d5f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x32d5fc: 0xae130114  sw          $s3, 0x114($s0)
    ctx->pc = 0x32d5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 19));
    // 0x32d600: 0x32ac0  sll         $a1, $v1, 11
    ctx->pc = 0x32d600u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x32d604: 0x24a22000  addiu       $v0, $a1, 0x2000
    ctx->pc = 0x32d604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
    // 0x32d608: 0xae050118  sw          $a1, 0x118($s0)
    ctx->pc = 0x32d608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 5));
    // 0x32d60c: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x32d60cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x32d610: 0x640002b  bltz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x32D610u;
    {
        const bool branch_taken_0x32d610 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x32D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D610u;
        // 0x32d614: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d610) {
            ctx->pc = 0x32D6C0u;
            goto label_32d6c0;
        }
    }
    ctx->pc = 0x32D618u;
    // 0x32d618: 0x2a420100  slti        $v0, $s2, 0x100
    ctx->pc = 0x32d618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x32d61c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x32D61Cu;
    {
        const bool branch_taken_0x32d61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D61Cu;
        // 0x32d620: 0xae1301cc  sw          $s3, 0x1CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 460), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d61c) {
            ctx->pc = 0x32D6C0u;
            goto label_32d6c0;
        }
    }
    ctx->pc = 0x32D624u;
    // 0x32d624: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x32d624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x32d628: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x32d628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x32d62c: 0xc0ce568  jal         func_3395A0
    ctx->pc = 0x32D62Cu;
    SET_GPR_U32(ctx, 31, 0x32D634u);
    ctx->pc = 0x32D630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D62Cu;
    // 0x32d630: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395A0u, 0x32D62Cu, 0x32D634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D634u;
label_32d634:
    // 0x32d634: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x32D634u;
    {
        const bool branch_taken_0x32d634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D634u;
        // 0x32d638: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d634) {
            ctx->pc = 0x32D6C0u;
            goto label_32d6c0;
        }
    }
    ctx->pc = 0x32D63Cu;
    // 0x32d63c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x32d63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x32d640: 0x26060094  addiu       $a2, $s0, 0x94
    ctx->pc = 0x32d640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x32d644: 0xc0cbcb6  jal         func_32F2D8
    ctx->pc = 0x32D644u;
    SET_GPR_U32(ctx, 31, 0x32D64Cu);
    ctx->pc = 0x32D648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D644u;
    // 0x32d648: 0x8e050090  lw          $a1, 0x90($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F2D8u, 0x32D644u, 0x32D64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D64Cu;
label_32d64c:
    // 0x32d64c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x32D64Cu;
    {
        const bool branch_taken_0x32d64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D64Cu;
        // 0x32d650: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d64c) {
            ctx->pc = 0x32D6C0u;
            goto label_32d6c0;
        }
    }
    ctx->pc = 0x32D654u;
    // 0x32d654: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x32d654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x32d658: 0xc0c9f40  jal         func_327D00
    ctx->pc = 0x32D658u;
    SET_GPR_U32(ctx, 31, 0x32D660u);
    ctx->pc = 0x32D65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D658u;
    // 0x32d65c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327D00u, 0x32D658u, 0x32D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D660u;
label_32d660:
    // 0x32d660: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x32D660u;
    {
        const bool branch_taken_0x32d660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D660u;
        // 0x32d664: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d660) {
            ctx->pc = 0x32D6C0u;
            goto label_32d6c0;
        }
    }
    ctx->pc = 0x32D668u;
    // 0x32d668: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32d668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32d66c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32d66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d670: 0x24a5e488  addiu       $a1, $a1, -0x1B78
    ctx->pc = 0x32d670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960264));
    // 0x32d674: 0xc0ca0fa  jal         func_3283E8
    ctx->pc = 0x32D674u;
    SET_GPR_U32(ctx, 31, 0x32D67Cu);
    ctx->pc = 0x32D678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D674u;
    // 0x32d678: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3283E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3283E8u, 0x32D674u, 0x32D67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D67Cu;
label_32d67c:
    // 0x32d67c: 0xae0001a8  sw          $zero, 0x1A8($s0)
    ctx->pc = 0x32d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x32d680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32d680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d688: 0xa20201b1  sb          $v0, 0x1B1($s0)
    ctx->pc = 0x32d688u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 433), (uint8_t)GPR_U32(ctx, 2));
    // 0x32d68c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32d68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d690: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x32d690u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x32d694: 0xa20001b0  sb          $zero, 0x1B0($s0)
    ctx->pc = 0x32d694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 432), (uint8_t)GPR_U32(ctx, 0));
    // 0x32d698: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x32d698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x32d69c: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x32d69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    // 0x32d6a0: 0xae0001bc  sw          $zero, 0x1BC($s0)
    ctx->pc = 0x32d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 0));
    // 0x32d6a4: 0xae0001c4  sw          $zero, 0x1C4($s0)
    ctx->pc = 0x32d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 0));
    // 0x32d6a8: 0xae0301c8  sw          $v1, 0x1C8($s0)
    ctx->pc = 0x32d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 3));
    // 0x32d6ac: 0xae0001e4  sw          $zero, 0x1E4($s0)
    ctx->pc = 0x32d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
    // 0x32d6b0: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x32d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x32d6b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32D6B4u;
    {
        const bool branch_taken_0x32d6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D6B4u;
        // 0x32d6b8: 0xae000274  sw          $zero, 0x274($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d6b4) {
            ctx->pc = 0x32D6CCu;
            goto label_32d6cc;
        }
    }
    ctx->pc = 0x32D6BCu;
    // 0x32d6bc: 0x0  nop
    ctx->pc = 0x32d6bcu;
    // NOP
label_32d6c0:
    // 0x32d6c0: 0xc0cb5c8  jal         func_32D720
    ctx->pc = 0x32D6C0u;
    SET_GPR_U32(ctx, 31, 0x32D6C8u);
    ctx->pc = 0x32D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D6C0u;
    // 0x32d6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D720u, 0x32D6C0u, 0x32D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D6C8u;
label_32d6c8:
    // 0x32d6c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32d6c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d6cc:
    // 0x32d6cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d6ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d6d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32d6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d6d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32d6d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d6d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32d6d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32d6dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x32d6dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d6e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x32d6e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32d6e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32d6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32d6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x32D6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D6E8u;
        // 0x32d6ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D6F0u;
}
