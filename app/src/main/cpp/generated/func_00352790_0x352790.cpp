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

// Function: func_00352790
// Address: 0x352790 - 0x352888
void func_00352790_0x352790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00352790_0x352790");
#endif

    switch (ctx->pc) {
        case 0x352828u: goto label_352828;
        default: break;
    }

    ctx->pc = 0x352790u;

    // 0x352790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x352794: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x352794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x352798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35279c: 0x25100d30  addiu       $s0, $t0, 0xD30
    ctx->pc = 0x35279cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 3376));
    // 0x3527a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3527a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3527a4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3527a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3527a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3527a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3527ac: 0x8cb10014  lw          $s1, 0x14($a1)
    ctx->pc = 0x3527acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3527b0: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x3527b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3527b4: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3527B4u;
    {
        const bool branch_taken_0x3527b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3527B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3527B4u;
        // 0x3527b8: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3527b4) {
            ctx->pc = 0x3527E0u;
            goto label_3527e0;
        }
    }
    ctx->pc = 0x3527BCu;
    // 0x3527bc: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3527BCu;
    {
        const bool branch_taken_0x3527bc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3527C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3527BCu;
        // 0x3527c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3527bc) {
            ctx->pc = 0x3527E0u;
            goto label_3527e0;
        }
    }
    ctx->pc = 0x3527C4u;
    // 0x3527c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3527c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3527c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3527c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3527cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3527ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3527d0: 0x25080d4c  addiu       $t0, $t0, 0xD4C
    ctx->pc = 0x3527d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3404));
    // 0x3527d4: 0x80d4a22  j           func_352888
    ctx->pc = 0x3527D4u;
    ctx->pc = 0x3527D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3527D4u;
    // 0x3527d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352888u, 0x3527D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3527DCu;
    // 0x3527dc: 0x0  nop
    ctx->pc = 0x3527dcu;
    // NOP
label_3527e0:
    // 0x3527e0: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x3527e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3527e4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3527E4u;
    {
        const bool branch_taken_0x3527e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3527e4) {
            ctx->pc = 0x352818u;
            goto label_352818;
        }
    }
    ctx->pc = 0x3527ECu;
    // 0x3527ec: 0x8d0236b0  lw          $v0, 0x36B0($t0)
    ctx->pc = 0x3527ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 14000)));
    // 0x3527f0: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x3527F0u;
    {
        const bool branch_taken_0x3527f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3527f0) {
            ctx->pc = 0x3527F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3527F0u;
            // 0x3527f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352874u;
            goto label_352874;
        }
    }
    ctx->pc = 0x3527F8u;
    // 0x3527f8: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x3527f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x3527fc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3527fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x352800: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x352800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x352804: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x352804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x352808: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x352808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x35280c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x35280Cu;
    {
        const bool branch_taken_0x35280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35280Cu;
        // 0x352810: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35280c) {
            ctx->pc = 0x352870u;
            goto label_352870;
        }
    }
    ctx->pc = 0x352814u;
    // 0x352814: 0x0  nop
    ctx->pc = 0x352814u;
    // NOP
label_352818:
    // 0x352818: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x352818u;
    {
        const bool branch_taken_0x352818 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x35281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352818u;
        // 0x35281c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352818) {
            ctx->pc = 0x352840u;
            goto label_352840;
        }
    }
    ctx->pc = 0x352820u;
    // 0x352820: 0xc0d4aa8  jal         func_352AA0
    ctx->pc = 0x352820u;
    SET_GPR_U32(ctx, 31, 0x352828u);
    ctx->pc = 0x352824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352820u;
    // 0x352824: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352AA0u, 0x352820u, 0x352828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352828u;
label_352828:
    // 0x352828: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x352828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x35282c: 0x9603003a  lhu         $v1, 0x3A($s0)
    ctx->pc = 0x35282cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x352830: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x352830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x352834: 0xa60304b2  sh          $v1, 0x4B2($s0)
    ctx->pc = 0x352834u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1202), (uint16_t)GPR_U32(ctx, 3));
    // 0x352838: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x352838u;
    {
        const bool branch_taken_0x352838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352838u;
        // 0x35283c: 0xa44304b2  sh          $v1, 0x4B2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 1202), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352838) {
            ctx->pc = 0x352870u;
            goto label_352870;
        }
    }
    ctx->pc = 0x352840u;
label_352840:
    // 0x352840: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x352840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x352844: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x352844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x352848: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x352848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x35284c: 0x8e060078  lw          $a2, 0x78($s0)
    ctx->pc = 0x35284cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x352850: 0x8e07007c  lw          $a3, 0x7C($s0)
    ctx->pc = 0x352850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x352854: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x352854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x352858: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x352858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x35285c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x35285cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x352860: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x352860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x352864: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x352864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x352868: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x352868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x35286c: 0xae07002c  sw          $a3, 0x2C($s0)
    ctx->pc = 0x35286cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 7));
label_352870:
    // 0x352870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x352870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_352874:
    // 0x352874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x352874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x352878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x352878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35287c: 0x3e00008  jr          $ra
    ctx->pc = 0x35287Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35287Cu;
        // 0x352880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35287Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352884u;
    // 0x352884: 0x0  nop
    ctx->pc = 0x352884u;
    // NOP
    ctx->pc = 0x352888u;
}
