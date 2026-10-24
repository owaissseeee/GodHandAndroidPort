#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: Move__5cR020
// Address: 0x7996d0 - 0x799800
void Move__5cR020_0x7996d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Move__5cR020_0x7996d0");
#endif

    switch (ctx->pc) {
        case 0x799794u: goto label_799794;
        case 0x7997a4u: goto label_7997a4;
        case 0x7997b4u: goto label_7997b4;
        case 0x7997c4u: goto label_7997c4;
        case 0x7997d4u: goto label_7997d4;
        case 0x7997f4u: goto label_7997f4;
        default: break;
    }

    ctx->pc = 0x7996d0u;

    // 0x7996d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7996d4: 0x3c090074  lui         $t1, 0x74
    ctx->pc = 0x7996d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)116 << 16));
    // 0x7996d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7996d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7996dc: 0x252b7a78  addiu       $t3, $t1, 0x7A78
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 31352));
    // 0x7996e0: 0x3c080080  lui         $t0, 0x80
    ctx->pc = 0x7996e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
    // 0x7996e4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x7996e8: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x7996e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x7996ec: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x7996ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x7996f0: 0x8d237a78  lw          $v1, 0x7A78($t1)
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x7996f4: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x7996f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x7996f8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x7996f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x7996fc: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x799700: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x799700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x799704: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x799704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x799708: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79970c: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x79970cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x799710: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x799710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x799714: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x799714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x799718: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x799718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x79971c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x79971cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x799720: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x799720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x799724: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x799728: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x79972c: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x79972cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x799730: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x799730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x799734: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x799734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x799738: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x799738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x79973c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x79973cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x799740: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x799740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x799744: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x799744u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x799748: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x799748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x79974c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x79974cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x799750: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x799750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x799754: 0xad237a78  sw          $v1, 0x7A78($t1)
    ctx->pc = 0x799754u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x747A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A78u, _value); } while (0);
    // 0x799758: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79975c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x79975cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799760: 0xad620008  sw          $v0, 0x8($t3)
    ctx->pc = 0x799760u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A80u, _value); } while (0);
    // 0x799764: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x799764u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799768: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x799768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x79976c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x79976Cu;
    {
        const bool branch_taken_0x79976c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79976Cu;
        // 0x799770: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79976c) {
            ctx->pc = 0x7997D4u;
            goto label_7997d4;
        }
    }
    ctx->pc = 0x799774u;
    // 0x799774: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x799774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x799778: 0x2442cb30  addiu       $v0, $v0, -0x34D0
    ctx->pc = 0x799778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953776));
    // 0x79977c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799780: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799784: 0x800008  jr          $a0
    ctx->pc = 0x799784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79978Cu: goto label_79978c;
            case 0x79979Cu: goto label_79979c;
            case 0x7997ACu: goto label_7997ac;
            case 0x7997BCu: goto label_7997bc;
            case 0x7997CCu: goto label_7997cc;
            case 0x7997D4u: goto label_7997d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799784u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79978Cu;
label_79978c:
    // 0x79978c: 0xc1e6652  jal         func_799948
    ctx->pc = 0x79978Cu;
    SET_GPR_U32(ctx, 31, 0x799794u);
    ctx->pc = 0x799790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79978Cu;
    // 0x799790: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799948u, 0x79978Cu, 0x799794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799794u;
label_799794:
    // 0x799794: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x799794u;
    {
        const bool branch_taken_0x799794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799794u;
        // 0x799798: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799794) {
            ctx->pc = 0x7997D8u;
            goto label_7997d8;
        }
    }
    ctx->pc = 0x79979Cu;
label_79979c:
    // 0x79979c: 0xc1e6fc0  jal         func_79BF00
    ctx->pc = 0x79979Cu;
    SET_GPR_U32(ctx, 31, 0x7997A4u);
    ctx->pc = 0x7997A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79979Cu;
    // 0x7997a0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BF00u, 0x79979Cu, 0x7997A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997A4u;
label_7997a4:
    // 0x7997a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7997A4u;
    {
        const bool branch_taken_0x7997a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A4u;
        // 0x7997a8: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997a4) {
            ctx->pc = 0x7997D8u;
            goto label_7997d8;
        }
    }
    ctx->pc = 0x7997ACu;
label_7997ac:
    // 0x7997ac: 0xc1e7144  jal         func_79C510
    ctx->pc = 0x7997ACu;
    SET_GPR_U32(ctx, 31, 0x7997B4u);
    ctx->pc = 0x7997B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997ACu;
    // 0x7997b0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C510u, 0x7997ACu, 0x7997B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997B4u;
label_7997b4:
    // 0x7997b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x7997B4u;
    {
        const bool branch_taken_0x7997b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B4u;
        // 0x7997b8: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997b4) {
            ctx->pc = 0x7997D8u;
            goto label_7997d8;
        }
    }
    ctx->pc = 0x7997BCu;
label_7997bc:
    // 0x7997bc: 0xc1e667c  jal         func_7999F0
    ctx->pc = 0x7997BCu;
    SET_GPR_U32(ctx, 31, 0x7997C4u);
    ctx->pc = 0x7997C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997BCu;
    // 0x7997c0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7999F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7999F0u, 0x7997BCu, 0x7997C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997C4u;
label_7997c4:
    // 0x7997c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7997C4u;
    {
        const bool branch_taken_0x7997c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997C4u;
        // 0x7997c8: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997c4) {
            ctx->pc = 0x7997D8u;
            goto label_7997d8;
        }
    }
    ctx->pc = 0x7997CCu;
label_7997cc:
    // 0x7997cc: 0xc1e6600  jal         func_799800
    ctx->pc = 0x7997CCu;
    SET_GPR_U32(ctx, 31, 0x7997D4u);
    ctx->pc = 0x7997D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997CCu;
    // 0x7997d0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799800u, 0x7997CCu, 0x7997D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D4u;
label_7997d4:
    // 0x7997d4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x7997d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_7997d8:
    // 0x7997d8: 0x8c627a34  lw          $v0, 0x7A34($v1)
    ctx->pc = 0x7997d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31284)));
    // 0x7997dc: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x7997dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x7997e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7997E0u;
    {
        const bool branch_taken_0x7997e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E0u;
        // 0x7997e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997e0) {
            ctx->pc = 0x7997F8u;
            goto label_7997f8;
        }
    }
    ctx->pc = 0x7997E8u;
    // 0x7997e8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x7997ec: 0xc0806b8  jal         func_201AE0
    ctx->pc = 0x7997ECu;
    SET_GPR_U32(ctx, 31, 0x7997F4u);
    ctx->pc = 0x7997F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997ECu;
    // 0x7997f0: 0x24845038  addiu       $a0, $a0, 0x5038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AE0u, 0x7997ECu, 0x7997F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F4u;
label_7997f4:
    // 0x7997f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7997f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7997f8:
    // 0x7997f8: 0x3e00008  jr          $ra
    ctx->pc = 0x7997F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7997FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F8u;
        // 0x7997fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799800u;
}
} // namespace gh_r020
