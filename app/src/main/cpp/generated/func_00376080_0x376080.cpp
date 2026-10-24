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

// Function: func_00376080
// Address: 0x376080 - 0x3761d0
void func_00376080_0x376080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00376080_0x376080");
#endif

    switch (ctx->pc) {
        case 0x37609cu: goto label_37609c;
        case 0x376130u: goto label_376130;
        case 0x376140u: goto label_376140;
        case 0x3761acu: goto label_3761ac;
        default: break;
    }

    ctx->pc = 0x376080u;

    // 0x376080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x376080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x376084: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x376084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x376088: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x376088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37608c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37608cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x376090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376094: 0xc0dda84  jal         func_376A10
    ctx->pc = 0x376094u;
    SET_GPR_U32(ctx, 31, 0x37609Cu);
    ctx->pc = 0x376098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376094u;
    // 0x376098: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376A10u, 0x376094u, 0x37609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37609Cu;
label_37609c:
    // 0x37609c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37609cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3760a0: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3760A0u;
    {
        const bool branch_taken_0x3760a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3760A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3760A0u;
        // 0x3760a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3760a0) {
            ctx->pc = 0x3761B4u;
            goto label_3761b4;
        }
    }
    ctx->pc = 0x3760A8u;
    // 0x3760a8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3760a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3760ac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3760acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3760b0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3760b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3760b4: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x3760b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3760b8: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x3760b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x3760bc: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x3760bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3760c0: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x3760c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x3760c4: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x3760c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3760c8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3760c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3760cc: 0x92230016  lbu         $v1, 0x16($s1)
    ctx->pc = 0x3760ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x3760d0: 0xa203000e  sb          $v1, 0xE($s0)
    ctx->pc = 0x3760d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x3760d4: 0x92220017  lbu         $v0, 0x17($s1)
    ctx->pc = 0x3760d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 23)));
    // 0x3760d8: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x3760d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x3760dc: 0x92230018  lbu         $v1, 0x18($s1)
    ctx->pc = 0x3760dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3760e0: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x3760e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x3760e4: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x3760e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3760e8: 0x9622001c  lhu         $v0, 0x1C($s1)
    ctx->pc = 0x3760e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3760ec: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x3760ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x3760f0: 0x9623001e  lhu         $v1, 0x1E($s1)
    ctx->pc = 0x3760f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x3760f4: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x3760f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x3760f8: 0x96250020  lhu         $a1, 0x20($s1)
    ctx->pc = 0x3760f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3760fc: 0xa600001a  sh          $zero, 0x1A($s0)
    ctx->pc = 0x3760fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x376100: 0xa6050018  sh          $a1, 0x18($s0)
    ctx->pc = 0x376100u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 5));
    // 0x376104: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x376104u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x376108: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x376108u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37610c: 0xa600001e  sh          $zero, 0x1E($s0)
    ctx->pc = 0x37610cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x376110: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x376110u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x376114: 0x96240028  lhu         $a0, 0x28($s1)
    ctx->pc = 0x376114u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x376118: 0xa6040020  sh          $a0, 0x20($s0)
    ctx->pc = 0x376118u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 4));
    // 0x37611c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x37611cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x376120: 0x9622002a  lhu         $v0, 0x2A($s1)
    ctx->pc = 0x376120u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x376124: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x376124u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x376128: 0xc0de02c  jal         func_3780B0
    ctx->pc = 0x376128u;
    SET_GPR_U32(ctx, 31, 0x376130u);
    ctx->pc = 0x37612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376128u;
    // 0x37612c: 0xa6020022  sh          $v0, 0x22($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3780B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3780B0u, 0x376128u, 0x376130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376130u;
label_376130:
    // 0x376130: 0x86050018  lh          $a1, 0x18($s0)
    ctx->pc = 0x376130u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x376134: 0x86040022  lh          $a0, 0x22($s0)
    ctx->pc = 0x376134u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x376138: 0xc0de02c  jal         func_3780B0
    ctx->pc = 0x376138u;
    SET_GPR_U32(ctx, 31, 0x376140u);
    ctx->pc = 0x37613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376138u;
    // 0x37613c: 0xa6020024  sh          $v0, 0x24($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3780B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3780B0u, 0x376138u, 0x376140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376140u;
label_376140:
    // 0x376140: 0xa6020026  sh          $v0, 0x26($s0)
    ctx->pc = 0x376140u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x376144: 0x3c060077  lui         $a2, 0x77
    ctx->pc = 0x376144u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)119 << 16));
    // 0x376148: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x376148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x37614c: 0x24c6ea50  addiu       $a2, $a2, -0x15B0
    ctx->pc = 0x37614cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961744));
    // 0x376150: 0x9623002c  lhu         $v1, 0x2C($s1)
    ctx->pc = 0x376150u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x376154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376158: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x376158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x37615c: 0x8605000c  lh          $a1, 0xC($s0)
    ctx->pc = 0x37615cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x376160: 0xa6030028  sh          $v1, 0x28($s0)
    ctx->pc = 0x376160u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x376164: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x376164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x376168: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x376168u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x37616c: 0x96230034  lhu         $v1, 0x34($s1)
    ctx->pc = 0x37616cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x376170: 0xa603002a  sh          $v1, 0x2A($s0)
    ctx->pc = 0x376170u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x376174: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x376174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x376178: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x376178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x37617c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x37617cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x376180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x376180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x376184: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x376184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x376188: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x376188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x37618c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x37618cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x376190: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x376190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x376194: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x376194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x376198: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x376198u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x37619c: 0xa205003c  sb          $a1, 0x3C($s0)
    ctx->pc = 0x37619cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 5));
    // 0x3761a0: 0x90430005  lbu         $v1, 0x5($v0)
    ctx->pc = 0x3761a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x3761a4: 0xc0dd874  jal         func_3761D0
    ctx->pc = 0x3761A4u;
    SET_GPR_U32(ctx, 31, 0x3761ACu);
    ctx->pc = 0x3761A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3761A4u;
    // 0x3761a8: 0xa203003d  sb          $v1, 0x3D($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3761D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3761D0u, 0x3761A4u, 0x3761ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3761ACu;
label_3761ac:
    // 0x3761ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3761ACu;
    {
        const bool branch_taken_0x3761ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3761B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3761ACu;
        // 0x3761b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3761ac) {
            ctx->pc = 0x3761B8u;
            goto label_3761b8;
        }
    }
    ctx->pc = 0x3761B4u;
label_3761b4:
    // 0x3761b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3761b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3761b8:
    // 0x3761b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3761b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3761bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3761bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3761c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3761c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3761c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3761C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3761C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3761C4u;
        // 0x3761c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3761C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3761CCu;
    // 0x3761cc: 0x0  nop
    ctx->pc = 0x3761ccu;
    // NOP
    ctx->pc = 0x3761d0u;
}
