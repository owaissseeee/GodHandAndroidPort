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

// Function: func_00333880
// Address: 0x333880 - 0x333a10
void func_00333880_0x333880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00333880_0x333880");
#endif

    switch (ctx->pc) {
        case 0x3338d0u: goto label_3338d0;
        case 0x333904u: goto label_333904;
        case 0x33390cu: goto label_33390c;
        case 0x333910u: goto label_333910;
        case 0x333918u: goto label_333918;
        case 0x333928u: goto label_333928;
        case 0x333930u: goto label_333930;
        case 0x33393cu: goto label_33393c;
        case 0x333954u: goto label_333954;
        case 0x333974u: goto label_333974;
        case 0x333990u: goto label_333990;
        case 0x3339a0u: goto label_3339a0;
        case 0x3339c0u: goto label_3339c0;
        case 0x3339dcu: goto label_3339dc;
        default: break;
    }

    ctx->pc = 0x333880u;

    // 0x333880: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x333880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x333884: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x333884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x333888: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x333888u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33388c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x33388cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x333890: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x333890u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333894: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x333894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x333898: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x333898u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33389c: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x33389cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x3338a0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3338a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3338a4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3338a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3338a8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x3338a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x3338ac: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x3338acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x3338b0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x3338b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x3338b4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x3338b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x3338b8: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x3338b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x3338bc: 0x1ac0003c  blez        $s6, . + 4 + (0x3C << 2)
    ctx->pc = 0x3338BCu;
    {
        const bool branch_taken_0x3338bc = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x3338C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3338BCu;
        // 0x3338c0: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3338bc) {
            ctx->pc = 0x3339B0u;
            goto label_3339b0;
        }
    }
    ctx->pc = 0x3338C4u;
    // 0x3338c4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3338c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3338c8: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x3338c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3338cc: 0x245e9dc0  addiu       $fp, $v0, -0x6240
    ctx->pc = 0x3338ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942144));
label_3338d0:
    // 0x3338d0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3338d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3338d4: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3338d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3338d8: 0x542018  mult        $a0, $v0, $s4
    ctx->pc = 0x3338d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3338dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3338dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3338e0: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x3338e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x3338e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3338e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3338e8: 0x2a38821  addu        $s1, $s5, $v1
    ctx->pc = 0x3338e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3338ec: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3338ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3338f0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3338F0u;
    {
        const bool branch_taken_0x3338f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3338F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3338F0u;
        // 0x3338f4: 0x3c13003e  lui         $s3, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3338f0) {
            ctx->pc = 0x3339A0u;
            goto label_3339a0;
        }
    }
    ctx->pc = 0x3338F8u;
    // 0x3338f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3338f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3338fc: 0xc0ccce4  jal         func_333390
    ctx->pc = 0x3338FCu;
    SET_GPR_U32(ctx, 31, 0x333904u);
    ctx->pc = 0x333900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3338FCu;
    // 0x333900: 0x26659ee8  addiu       $a1, $s3, -0x6118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333390u, 0x3338FCu, 0x333904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333904u;
label_333904:
    // 0x333904: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x333904u;
    SET_GPR_U32(ctx, 31, 0x33390Cu);
    ctx->pc = 0x333908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333904u;
    // 0x333908: 0x34049400  ori         $a0, $zero, 0x9400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x333904u, 0x33390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33390Cu;
label_33390c:
    // 0x33390c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x33390cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333910:
    // 0x333910: 0xc0e6368  jal         func_398DA0
    ctx->pc = 0x333910u;
    SET_GPR_U32(ctx, 31, 0x333918u);
    ctx->pc = 0x333914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333910u;
    // 0x333914: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DA0u, 0x333910u, 0x333918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333918u;
label_333918:
    // 0x333918: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x333918u;
    {
        const bool branch_taken_0x333918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x333918) {
            ctx->pc = 0x333910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333910;
        }
    }
    ctx->pc = 0x333920u;
    // 0x333920: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x333920u;
    SET_GPR_U32(ctx, 31, 0x333928u);
    ctx->pc = 0x333924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333920u;
    // 0x333924: 0x34049401  ori         $a0, $zero, 0x9401 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37889);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x333920u, 0x333928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333928u;
label_333928:
    // 0x333928: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x333928u;
    SET_GPR_U32(ctx, 31, 0x333930u);
    ctx->pc = 0x33392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333928u;
    // 0x33392c: 0x34049500  ori         $a0, $zero, 0x9500 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x333928u, 0x333930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333930u;
label_333930:
    // 0x333930: 0x26659ee8  addiu       $a1, $s3, -0x6118
    ctx->pc = 0x333930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942440));
    // 0x333934: 0xc0cca0e  jal         func_332838
    ctx->pc = 0x333934u;
    SET_GPR_U32(ctx, 31, 0x33393Cu);
    ctx->pc = 0x333938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333934u;
    // 0x333938: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332838u, 0x333934u, 0x33393Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33393Cu;
label_33393c:
    // 0x33393c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33393cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333940: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x333940u;
    {
        const bool branch_taken_0x333940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x333940) {
            ctx->pc = 0x333944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333940u;
            // 0x333944: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333980u;
            goto label_333980;
        }
    }
    ctx->pc = 0x333948u;
    // 0x333948: 0x34049501  ori         $a0, $zero, 0x9501
    ctx->pc = 0x333948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38145);
    // 0x33394c: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x33394Cu;
    SET_GPR_U32(ctx, 31, 0x333954u);
    ctx->pc = 0x333950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33394Cu;
    // 0x333950: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x33394Cu, 0x333954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333954u;
label_333954:
    // 0x333954: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x333954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x333958: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x333958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33395c: 0x244444f8  addiu       $a0, $v0, 0x44F8
    ctx->pc = 0x33395cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17656));
    // 0x333960: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x333960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x333964: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x333964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333968: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x333968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x33396c: 0xc0c9814  jal         func_326050
    ctx->pc = 0x33396Cu;
    SET_GPR_U32(ctx, 31, 0x333974u);
    ctx->pc = 0x333970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33396Cu;
    // 0x333970: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326050u, 0x33396Cu, 0x333974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333974u;
label_333974:
    // 0x333974: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x333974u;
    {
        const bool branch_taken_0x333974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333974u;
        // 0x333978: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333974) {
            ctx->pc = 0x3339A4u;
            goto label_3339a4;
        }
    }
    ctx->pc = 0x33397Cu;
    // 0x33397c: 0x0  nop
    ctx->pc = 0x33397cu;
    // NOP
label_333980:
    // 0x333980: 0x34049502  ori         $a0, $zero, 0x9502
    ctx->pc = 0x333980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38146);
    // 0x333984: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x333984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x333988: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x333988u;
    SET_GPR_U32(ctx, 31, 0x333990u);
    ctx->pc = 0x33398Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333988u;
    // 0x33398c: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x333988u, 0x333990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333990u;
label_333990:
    // 0x333990: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x333990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x333994: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x333994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333998: 0xc0c9814  jal         func_326050
    ctx->pc = 0x333998u;
    SET_GPR_U32(ctx, 31, 0x3339A0u);
    ctx->pc = 0x33399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333998u;
    // 0x33399c: 0x24444510  addiu       $a0, $v0, 0x4510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326050u, 0x333998u, 0x3339A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3339A0u;
label_3339a0:
    // 0x3339a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3339a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3339a4:
    // 0x3339a4: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x3339a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x3339a8: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x3339A8u;
    {
        const bool branch_taken_0x3339a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3339ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3339A8u;
        // 0x3339ac: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3339a8) {
            ctx->pc = 0x3338D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3338d0;
        }
    }
    ctx->pc = 0x3339B0u;
label_3339b0:
    // 0x3339b0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3339b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3339b4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3339b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3339b8: 0xc0c9814  jal         func_326050
    ctx->pc = 0x3339B8u;
    SET_GPR_U32(ctx, 31, 0x3339C0u);
    ctx->pc = 0x3339BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3339B8u;
    // 0x3339bc: 0x24844528  addiu       $a0, $a0, 0x4528 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326050u, 0x3339B8u, 0x3339C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3339C0u;
label_3339c0:
    // 0x3339c0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3339c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3339c4: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3339C4u;
    {
        const bool branch_taken_0x3339c4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3339C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3339C4u;
        // 0x3339c8: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3339c4) {
            ctx->pc = 0x3339E0u;
            goto label_3339e0;
        }
    }
    ctx->pc = 0x3339CCu;
    // 0x3339cc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3339ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3339d0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3339d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3339d4: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x3339D4u;
    SET_GPR_U32(ctx, 31, 0x3339DCu);
    ctx->pc = 0x3339D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3339D4u;
    // 0x3339d8: 0x24844540  addiu       $a0, $a0, 0x4540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x3339D4u, 0x3339DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3339DCu;
label_3339dc:
    // 0x3339dc: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x3339dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3339e0:
    // 0x3339e0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3339e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3339e4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x3339e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3339e8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3339e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3339ec: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x3339ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3339f0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x3339f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3339f4: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x3339f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3339f8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x3339f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3339fc: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x3339fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x333a00: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x333a00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x333a04: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x333a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x333a08: 0x3e00008  jr          $ra
    ctx->pc = 0x333A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A08u;
        // 0x333a0c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333A10u;
}
