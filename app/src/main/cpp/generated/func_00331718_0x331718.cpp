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

// Function: func_00331718
// Address: 0x331718 - 0x331900
void func_00331718_0x331718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331718_0x331718");
#endif

    switch (ctx->pc) {
        case 0x331770u: goto label_331770;
        case 0x331778u: goto label_331778;
        case 0x331784u: goto label_331784;
        case 0x3317a0u: goto label_3317a0;
        case 0x3317a8u: goto label_3317a8;
        case 0x3317b0u: goto label_3317b0;
        case 0x3317b8u: goto label_3317b8;
        case 0x331808u: goto label_331808;
        case 0x331838u: goto label_331838;
        case 0x331844u: goto label_331844;
        case 0x33189cu: goto label_33189c;
        case 0x3318a4u: goto label_3318a4;
        case 0x3318b0u: goto label_3318b0;
        case 0x3318b8u: goto label_3318b8;
        default: break;
    }

    ctx->pc = 0x331718u;

    // 0x331718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x331718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33171c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33171cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331720: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x331720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x331724: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x331724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331728: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x331728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33172c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33172cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x331730: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x331730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x331734: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x331734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x331738: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x331738u;
    {
        const bool branch_taken_0x331738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331738u;
        // 0x33173c: 0x92250002  lbu         $a1, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331738) {
            ctx->pc = 0x3317ECu;
            goto label_3317ec;
        }
    }
    ctx->pc = 0x331740u;
    // 0x331740: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x331740u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x331744: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x331744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x331748: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x331748u;
    {
        const bool branch_taken_0x331748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331748) {
            ctx->pc = 0x33174Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331748u;
            // 0x33174c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3317ECu;
            goto label_3317ec;
        }
    }
    ctx->pc = 0x331750u;
    // 0x331750: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x331750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x331754: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x331754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x331758: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x331758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33175c: 0x8c633f40  lw          $v1, 0x3F40($v1)
    ctx->pc = 0x33175cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16192)));
    // 0x331760: 0x600008  jr          $v1
    ctx->pc = 0x331760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x331768u: goto label_331768;
            case 0x3317E0u: goto label_3317e0;
            case 0x3317E8u: goto label_3317e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331760u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x331768u;
label_331768:
    // 0x331768: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x331768u;
    SET_GPR_U32(ctx, 31, 0x331770u);
    ctx->pc = 0x33176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331768u;
    // 0x33176c: 0x24041600  addiu       $a0, $zero, 0x1600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x331768u, 0x331770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331770u;
label_331770:
    // 0x331770: 0xc0e66c8  jal         func_399B20
    ctx->pc = 0x331770u;
    SET_GPR_U32(ctx, 31, 0x331778u);
    ctx->pc = 0x399B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399B20u, 0x331770u, 0x331778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331778u;
label_331778:
    // 0x331778: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x331778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33177c: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x33177Cu;
    SET_GPR_U32(ctx, 31, 0x331784u);
    ctx->pc = 0x331780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33177Cu;
    // 0x331780: 0x24041601  addiu       $a0, $zero, 0x1601 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5633));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x33177Cu, 0x331784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331784u;
label_331784:
    // 0x331784: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x331784u;
    {
        const bool branch_taken_0x331784 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x331788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331784u;
        // 0x331788: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331784) {
            ctx->pc = 0x3317A0u;
            goto label_3317a0;
        }
    }
    ctx->pc = 0x33178Cu;
    // 0x33178c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33178cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x331790: 0x24428464  addiu       $v0, $v0, -0x7B9C
    ctx->pc = 0x331790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935652));
    // 0x331794: 0x24843f18  addiu       $a0, $a0, 0x3F18
    ctx->pc = 0x331794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16152));
    // 0x331798: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x331798u;
    SET_GPR_U32(ctx, 31, 0x3317A0u);
    ctx->pc = 0x33179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331798u;
    // 0x33179c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x331798u, 0x3317A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3317A0u;
label_3317a0:
    // 0x3317a0: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3317A0u;
    SET_GPR_U32(ctx, 31, 0x3317A8u);
    ctx->pc = 0x3317A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3317A0u;
    // 0x3317a4: 0x24041700  addiu       $a0, $zero, 0x1700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3317A0u, 0x3317A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3317A8u;
label_3317a8:
    // 0x3317a8: 0xc0e6368  jal         func_398DA0
    ctx->pc = 0x3317A8u;
    SET_GPR_U32(ctx, 31, 0x3317B0u);
    ctx->pc = 0x3317ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3317A8u;
    // 0x3317ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DA0u, 0x3317A8u, 0x3317B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3317B0u;
label_3317b0:
    // 0x3317b0: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3317B0u;
    SET_GPR_U32(ctx, 31, 0x3317B8u);
    ctx->pc = 0x3317B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3317B0u;
    // 0x3317b4: 0x24041701  addiu       $a0, $zero, 0x1701 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3317B0u, 0x3317B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3317B8u;
label_3317b8:
    // 0x3317b8: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3317b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3317bc: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x3317bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x3317c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3317c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3317c4: 0x2463846c  addiu       $v1, $v1, -0x7B94
    ctx->pc = 0x3317c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935660));
    // 0x3317c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3317c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D846Cu));
    // 0x3317cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3317ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3317d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3317d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3D846Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D846Cu, _value); } while (0);
    // 0x3317d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3317D4u;
    {
        const bool branch_taken_0x3317d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3317D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3317D4u;
        // 0x3317d8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3317d4) {
            ctx->pc = 0x3317ECu;
            goto label_3317ec;
        }
    }
    ctx->pc = 0x3317DCu;
    // 0x3317dc: 0x0  nop
    ctx->pc = 0x3317dcu;
    // NOP
label_3317e0:
    // 0x3317e0: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3317e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3317e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3317e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3317e8:
    // 0x3317e8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3317e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3317ec:
    // 0x3317ec: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x3317ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3317f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3317f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3317f4: 0x29603  sra         $s2, $v0, 24
    ctx->pc = 0x3317f4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3317f8: 0x56430023  bnel        $s2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3317F8u;
    {
        const bool branch_taken_0x3317f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x3317f8) {
            ctx->pc = 0x3317FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3317F8u;
            // 0x3317fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331888u;
            goto label_331888;
        }
    }
    ctx->pc = 0x331800u;
    // 0x331800: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x331800u;
    SET_GPR_U32(ctx, 31, 0x331808u);
    ctx->pc = 0x331804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331800u;
    // 0x331804: 0x24041800  addiu       $a0, $zero, 0x1800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x331800u, 0x331808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331808u;
label_331808:
    // 0x331808: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x331808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x33180c: 0x8c438498  lw          $v1, -0x7B68($v0)
    ctx->pc = 0x33180cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3D8498u));
    // 0x331810: 0x54720005  bnel        $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x331810u;
    {
        const bool branch_taken_0x331810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x331810) {
            ctx->pc = 0x331814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331810u;
            // 0x331814: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331828u;
            goto label_331828;
        }
    }
    ctx->pc = 0x331818u;
    // 0x331818: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x331818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x33181c: 0x9043849c  lbu         $v1, -0x7B64($v0)
    ctx->pc = 0x33181cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3D849Cu));
    // 0x331820: 0xa2230015  sb          $v1, 0x15($s1)
    ctx->pc = 0x331820u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x331824: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x331824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_331828:
    // 0x331828: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x331828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x33182c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x33182cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x331830: 0xc0e65ca  jal         func_399728
    ctx->pc = 0x331830u;
    SET_GPR_U32(ctx, 31, 0x331838u);
    ctx->pc = 0x331834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331830u;
    // 0x331834: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399728u, 0x331830u, 0x331838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331838u;
label_331838:
    // 0x331838: 0x24041801  addiu       $a0, $zero, 0x1801
    ctx->pc = 0x331838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6145));
    // 0x33183c: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x33183Cu;
    SET_GPR_U32(ctx, 31, 0x331844u);
    ctx->pc = 0x331840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33183Cu;
    // 0x331840: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x33183Cu, 0x331844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331844u;
label_331844:
    // 0x331844: 0x1612000a  bne         $s0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x331844u;
    {
        const bool branch_taken_0x331844 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x331848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331844u;
        // 0x331848: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331844) {
            ctx->pc = 0x331870u;
            goto label_331870;
        }
    }
    ctx->pc = 0x33184Cu;
    // 0x33184c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x33184cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x331850: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x331850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331854: 0x24428468  addiu       $v0, $v0, -0x7B98
    ctx->pc = 0x331854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935656));
    // 0x331858: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x331858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33185c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33185cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3D8468u));
    // 0x331860: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x331860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x331864: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x331864u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3D8468u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D8468u, _value); } while (0);
    // 0x331868: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x331868u;
    {
        const bool branch_taken_0x331868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331868u;
        // 0x33186c: 0xa2240002  sb          $a0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331868) {
            ctx->pc = 0x331880u;
            goto label_331880;
        }
    }
    ctx->pc = 0x331870u;
label_331870:
    // 0x331870: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x331870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x331874: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x331874u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x331878: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x331878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33187c: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x33187cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_331880:
    // 0x331880: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x331880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x331884: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x331884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_331888:
    // 0x331888: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x331888u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x33188c: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x33188Cu;
    {
        const bool branch_taken_0x33188c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x331890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33188Cu;
        // 0x331890: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33188c) {
            ctx->pc = 0x3318ECu;
            goto label_3318ec;
        }
    }
    ctx->pc = 0x331894u;
    // 0x331894: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x331894u;
    SET_GPR_U32(ctx, 31, 0x33189Cu);
    ctx->pc = 0x331898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331894u;
    // 0x331898: 0x24041900  addiu       $a0, $zero, 0x1900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x331894u, 0x33189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33189Cu;
label_33189c:
    // 0x33189c: 0xc0e6368  jal         func_398DA0
    ctx->pc = 0x33189Cu;
    SET_GPR_U32(ctx, 31, 0x3318A4u);
    ctx->pc = 0x3318A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33189Cu;
    // 0x3318a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DA0u, 0x33189Cu, 0x3318A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3318A4u;
label_3318a4:
    // 0x3318a4: 0x24041901  addiu       $a0, $zero, 0x1901
    ctx->pc = 0x3318a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6401));
    // 0x3318a8: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3318A8u;
    SET_GPR_U32(ctx, 31, 0x3318B0u);
    ctx->pc = 0x3318ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3318A8u;
    // 0x3318ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3318A8u, 0x3318B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3318B0u;
label_3318b0:
    // 0x3318b0: 0xc0cc576  jal         func_3315D8
    ctx->pc = 0x3318B0u;
    SET_GPR_U32(ctx, 31, 0x3318B8u);
    ctx->pc = 0x3318B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3318B0u;
    // 0x3318b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3315D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3315D8u, 0x3318B0u, 0x3318B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3318B8u;
label_3318b8:
    // 0x3318b8: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3318B8u;
    {
        const bool branch_taken_0x3318b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3318BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3318B8u;
        // 0x3318bc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3318b8) {
            ctx->pc = 0x3318E8u;
            goto label_3318e8;
        }
    }
    ctx->pc = 0x3318C0u;
    // 0x3318c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3318c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3318c4: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3318C4u;
    {
        const bool branch_taken_0x3318c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3318c4) {
            ctx->pc = 0x3318C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3318C4u;
            // 0x3318c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3318D0u;
            goto label_3318d0;
        }
    }
    ctx->pc = 0x3318CCu;
    // 0x3318cc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3318ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3318d0:
    // 0x3318d0: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x3318d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3318d4: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x3318d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x3318d8: 0x2463846c  addiu       $v1, $v1, -0x7B94
    ctx->pc = 0x3318d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935660));
    // 0x3318dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3318dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D846Cu));
    // 0x3318e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3318e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3318e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3318e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3D846Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D846Cu, _value); } while (0);
label_3318e8:
    // 0x3318e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3318e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3318ec:
    // 0x3318ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3318ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3318f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3318f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3318f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3318f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3318f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3318F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3318FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3318F8u;
        // 0x3318fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3318F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331900u;
}
