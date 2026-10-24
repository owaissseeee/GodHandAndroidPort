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

// Function: func_0033C088
// Address: 0x33c088 - 0x33c228
void func_0033C088_0x33c088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C088_0x33c088");
#endif

    switch (ctx->pc) {
        case 0x33c088u: goto label_33c088;
        case 0x33c08cu: goto label_33c08c;
        case 0x33c090u: goto label_33c090;
        case 0x33c094u: goto label_33c094;
        case 0x33c098u: goto label_33c098;
        case 0x33c09cu: goto label_33c09c;
        case 0x33c0a0u: goto label_33c0a0;
        case 0x33c0a4u: goto label_33c0a4;
        case 0x33c0a8u: goto label_33c0a8;
        case 0x33c0acu: goto label_33c0ac;
        case 0x33c0b0u: goto label_33c0b0;
        case 0x33c0b4u: goto label_33c0b4;
        case 0x33c0b8u: goto label_33c0b8;
        case 0x33c0bcu: goto label_33c0bc;
        case 0x33c0c0u: goto label_33c0c0;
        case 0x33c0c4u: goto label_33c0c4;
        case 0x33c0c8u: goto label_33c0c8;
        case 0x33c0ccu: goto label_33c0cc;
        case 0x33c0d0u: goto label_33c0d0;
        case 0x33c0d4u: goto label_33c0d4;
        case 0x33c0d8u: goto label_33c0d8;
        case 0x33c0dcu: goto label_33c0dc;
        case 0x33c0e0u: goto label_33c0e0;
        case 0x33c0e4u: goto label_33c0e4;
        case 0x33c0e8u: goto label_33c0e8;
        case 0x33c0ecu: goto label_33c0ec;
        case 0x33c0f0u: goto label_33c0f0;
        case 0x33c0f4u: goto label_33c0f4;
        case 0x33c0f8u: goto label_33c0f8;
        case 0x33c0fcu: goto label_33c0fc;
        case 0x33c100u: goto label_33c100;
        case 0x33c104u: goto label_33c104;
        case 0x33c108u: goto label_33c108;
        case 0x33c10cu: goto label_33c10c;
        case 0x33c110u: goto label_33c110;
        case 0x33c114u: goto label_33c114;
        case 0x33c118u: goto label_33c118;
        case 0x33c11cu: goto label_33c11c;
        case 0x33c120u: goto label_33c120;
        case 0x33c124u: goto label_33c124;
        case 0x33c128u: goto label_33c128;
        case 0x33c12cu: goto label_33c12c;
        case 0x33c130u: goto label_33c130;
        case 0x33c134u: goto label_33c134;
        case 0x33c138u: goto label_33c138;
        case 0x33c13cu: goto label_33c13c;
        case 0x33c140u: goto label_33c140;
        case 0x33c144u: goto label_33c144;
        case 0x33c148u: goto label_33c148;
        case 0x33c14cu: goto label_33c14c;
        case 0x33c150u: goto label_33c150;
        case 0x33c154u: goto label_33c154;
        case 0x33c158u: goto label_33c158;
        case 0x33c15cu: goto label_33c15c;
        case 0x33c160u: goto label_33c160;
        case 0x33c164u: goto label_33c164;
        case 0x33c168u: goto label_33c168;
        case 0x33c16cu: goto label_33c16c;
        case 0x33c170u: goto label_33c170;
        case 0x33c174u: goto label_33c174;
        case 0x33c178u: goto label_33c178;
        case 0x33c17cu: goto label_33c17c;
        case 0x33c180u: goto label_33c180;
        case 0x33c184u: goto label_33c184;
        case 0x33c188u: goto label_33c188;
        case 0x33c18cu: goto label_33c18c;
        case 0x33c190u: goto label_33c190;
        case 0x33c194u: goto label_33c194;
        case 0x33c198u: goto label_33c198;
        case 0x33c19cu: goto label_33c19c;
        case 0x33c1a0u: goto label_33c1a0;
        case 0x33c1a4u: goto label_33c1a4;
        case 0x33c1a8u: goto label_33c1a8;
        case 0x33c1acu: goto label_33c1ac;
        case 0x33c1b0u: goto label_33c1b0;
        case 0x33c1b4u: goto label_33c1b4;
        case 0x33c1b8u: goto label_33c1b8;
        case 0x33c1bcu: goto label_33c1bc;
        case 0x33c1c0u: goto label_33c1c0;
        case 0x33c1c4u: goto label_33c1c4;
        case 0x33c1c8u: goto label_33c1c8;
        case 0x33c1ccu: goto label_33c1cc;
        case 0x33c1d0u: goto label_33c1d0;
        case 0x33c1d4u: goto label_33c1d4;
        case 0x33c1d8u: goto label_33c1d8;
        case 0x33c1dcu: goto label_33c1dc;
        case 0x33c1e0u: goto label_33c1e0;
        case 0x33c1e4u: goto label_33c1e4;
        case 0x33c1e8u: goto label_33c1e8;
        case 0x33c1ecu: goto label_33c1ec;
        case 0x33c1f0u: goto label_33c1f0;
        case 0x33c1f4u: goto label_33c1f4;
        case 0x33c1f8u: goto label_33c1f8;
        case 0x33c1fcu: goto label_33c1fc;
        case 0x33c200u: goto label_33c200;
        case 0x33c204u: goto label_33c204;
        case 0x33c208u: goto label_33c208;
        case 0x33c20cu: goto label_33c20c;
        case 0x33c210u: goto label_33c210;
        case 0x33c214u: goto label_33c214;
        case 0x33c218u: goto label_33c218;
        case 0x33c21cu: goto label_33c21c;
        case 0x33c220u: goto label_33c220;
        case 0x33c224u: goto label_33c224;
        default: break;
    }

    ctx->pc = 0x33c088u;

label_33c088:
    // 0x33c088: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33c088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_33c08c:
    // 0x33c08c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33c08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_33c090:
    // 0x33c090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33c090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33c094:
    // 0x33c094: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x33c094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_33c098:
    // 0x33c098: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x33c098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c09c:
    // 0x33c09c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33c09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_33c0a0:
    // 0x33c0a0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x33c0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_33c0a4:
    // 0x33c0a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33c0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_33c0a8:
    // 0x33c0a8: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x33c0a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_33c0ac:
    // 0x33c0ac: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_33c0b0:
    if (ctx->pc == 0x33C0B0u) {
        ctx->pc = 0x33C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C0ACu;
        // 0x33c0b0: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C0B4u;
        goto label_33c0b4;
    }
    ctx->pc = 0x33C0ACu;
    {
        const bool branch_taken_0x33c0ac = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x33C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C0ACu;
        // 0x33c0b0: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c0ac) {
            ctx->pc = 0x33C0D4u;
            goto label_33c0d4;
        }
    }
    ctx->pc = 0x33C0B4u;
label_33c0b4:
    // 0x33c0b4: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x33c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_33c0b8:
    // 0x33c0b8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x33c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_33c0bc:
    // 0x33c0bc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x33c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_33c0c0:
    // 0x33c0c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33c0c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33c0c4:
    // 0x33c0c4: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x33c0c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_33c0c8:
    // 0x33c0c8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x33c0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_33c0cc:
    // 0x33c0cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_33c0d0:
    if (ctx->pc == 0x33C0D0u) {
        ctx->pc = 0x33C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C0CCu;
        // 0x33c0d0: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C0D4u;
        goto label_33c0d4;
    }
    ctx->pc = 0x33C0CCu;
    {
        const bool branch_taken_0x33c0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C0CCu;
        // 0x33c0d0: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c0cc) {
            ctx->pc = 0x33C0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c0b8;
        }
    }
    ctx->pc = 0x33C0D4u;
label_33c0d4:
    // 0x33c0d4: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x33c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_33c0d8:
    // 0x33c0d8: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x33c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_33c0dc:
    // 0x33c0dc: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
label_33c0e0:
    if (ctx->pc == 0x33C0E0u) {
        ctx->pc = 0x33C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C0DCu;
        // 0x33c0e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C0E4u;
        goto label_33c0e4;
    }
    ctx->pc = 0x33C0DCu;
    {
        const bool branch_taken_0x33c0dc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x33C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C0DCu;
        // 0x33c0e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c0dc) {
            ctx->pc = 0x33C170u;
            goto label_33c170;
        }
    }
    ctx->pc = 0x33C0E4u;
label_33c0e4:
    // 0x33c0e4: 0x26330004  addiu       $s3, $s1, 0x4
    ctx->pc = 0x33c0e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_33c0e8:
    // 0x33c0e8: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x33c0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_33c0ec:
    // 0x33c0ec: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x33c0ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_33c0f0:
    // 0x33c0f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33c0f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33c0f4:
    // 0x33c0f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33c0f8:
    // 0x33c0f8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x33c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_33c0fc:
    // 0x33c0fc: 0x40f809  jalr        $v0
label_33c100:
    if (ctx->pc == 0x33C100u) {
        ctx->pc = 0x33C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C0FCu;
        // 0x33c100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C104u;
        goto label_33c104;
    }
    ctx->pc = 0x33C0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33C104u);
        ctx->pc = 0x33C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C0FCu;
        // 0x33c100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C0FCu, 0x33C104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C104u;
label_33c104:
    // 0x33c104: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33c104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33c108:
    // 0x33c108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c10c:
    // 0x33c10c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x33c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_33c110:
    // 0x33c110: 0x40f809  jalr        $v0
label_33c114:
    if (ctx->pc == 0x33C114u) {
        ctx->pc = 0x33C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C110u;
        // 0x33c114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C118u;
        goto label_33c118;
    }
    ctx->pc = 0x33C110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33C118u);
        ctx->pc = 0x33C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C110u;
        // 0x33c114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C110u, 0x33C118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C118u;
label_33c118:
    // 0x33c118: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33c11c:
    // 0x33c11c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x33c11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33c120:
    // 0x33c120: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x33c120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33c124:
    // 0x33c124: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x33c124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_33c128:
    // 0x33c128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c12c:
    // 0x33c12c: 0x40f809  jalr        $v0
label_33c130:
    if (ctx->pc == 0x33C130u) {
        ctx->pc = 0x33C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C12Cu;
        // 0x33c130: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C134u;
        goto label_33c134;
    }
    ctx->pc = 0x33C12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33C134u);
        ctx->pc = 0x33C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C12Cu;
        // 0x33c130: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C12Cu, 0x33C134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C134u;
label_33c134:
    // 0x33c134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c138:
    // 0x33c138: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x33c138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33c13c:
    // 0x33c13c: 0xc0e94bc  jal         func_3A52F0
label_33c140:
    if (ctx->pc == 0x33C140u) {
        ctx->pc = 0x33C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C13Cu;
        // 0x33c140: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C144u;
        goto label_33c144;
    }
    ctx->pc = 0x33C13Cu;
    SET_GPR_U32(ctx, 31, 0x33C144u);
    ctx->pc = 0x33C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C13Cu;
    // 0x33c140: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33C13Cu, 0x33C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C144u;
label_33c144:
    // 0x33c144: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33c144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33c148:
    // 0x33c148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c14c:
    // 0x33c14c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c150:
    // 0x33c150: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x33c150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_33c154:
    // 0x33c154: 0x40f809  jalr        $v0
label_33c158:
    if (ctx->pc == 0x33C158u) {
        ctx->pc = 0x33C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C154u;
        // 0x33c158: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C15Cu;
        goto label_33c15c;
    }
    ctx->pc = 0x33C154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33C15Cu);
        ctx->pc = 0x33C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C154u;
        // 0x33c158: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C154u, 0x33C15Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C15Cu;
label_33c15c:
    // 0x33c15c: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x33c15cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_33c160:
    // 0x33c160: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x33c160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_33c164:
    // 0x33c164: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_33c168:
    if (ctx->pc == 0x33C168u) {
        ctx->pc = 0x33C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C164u;
        // 0x33c168: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C16Cu;
        goto label_33c16c;
    }
    ctx->pc = 0x33C164u;
    {
        const bool branch_taken_0x33c164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C164u;
        // 0x33c168: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c164) {
            ctx->pc = 0x33C0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c0e8;
        }
    }
    ctx->pc = 0x33C16Cu;
label_33c16c:
    // 0x33c16c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x33c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_33c170:
    // 0x33c170: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_33c174:
    if (ctx->pc == 0x33C174u) {
        ctx->pc = 0x33C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C170u;
        // 0x33c174: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C178u;
        goto label_33c178;
    }
    ctx->pc = 0x33C170u;
    {
        const bool branch_taken_0x33c170 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x33C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C170u;
        // 0x33c174: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c170) {
            ctx->pc = 0x33C200u;
            goto label_33c200;
        }
    }
    ctx->pc = 0x33C178u;
label_33c178:
    // 0x33c178: 0x2633000c  addiu       $s3, $s1, 0xC
    ctx->pc = 0x33c178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_33c17c:
    // 0x33c17c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x33c17cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_33c180:
    // 0x33c180: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x33c180u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_33c184:
    // 0x33c184: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33c184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33c188:
    // 0x33c188: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33c188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33c18c:
    // 0x33c18c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x33c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_33c190:
    // 0x33c190: 0x40f809  jalr        $v0
label_33c194:
    if (ctx->pc == 0x33C194u) {
        ctx->pc = 0x33C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C190u;
        // 0x33c194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C198u;
        goto label_33c198;
    }
    ctx->pc = 0x33C190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33C198u);
        ctx->pc = 0x33C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C190u;
        // 0x33c194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C190u, 0x33C198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C198u;
label_33c198:
    // 0x33c198: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33c198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33c19c:
    // 0x33c19c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c1a0:
    // 0x33c1a0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x33c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_33c1a4:
    // 0x33c1a4: 0x40f809  jalr        $v0
label_33c1a8:
    if (ctx->pc == 0x33C1A8u) {
        ctx->pc = 0x33C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1A4u;
        // 0x33c1a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C1ACu;
        goto label_33c1ac;
    }
    ctx->pc = 0x33C1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33C1ACu);
        ctx->pc = 0x33C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1A4u;
        // 0x33c1a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C1A4u, 0x33C1ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C1ACu;
label_33c1ac:
    // 0x33c1ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33c1b0:
    // 0x33c1b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x33c1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33c1b4:
    // 0x33c1b4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x33c1b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33c1b8:
    // 0x33c1b8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x33c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_33c1bc:
    // 0x33c1bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c1c0:
    // 0x33c1c0: 0x40f809  jalr        $v0
label_33c1c4:
    if (ctx->pc == 0x33C1C4u) {
        ctx->pc = 0x33C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1C0u;
        // 0x33c1c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C1C8u;
        goto label_33c1c8;
    }
    ctx->pc = 0x33C1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33C1C8u);
        ctx->pc = 0x33C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1C0u;
        // 0x33c1c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C1C0u, 0x33C1C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C1C8u;
label_33c1c8:
    // 0x33c1c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c1cc:
    // 0x33c1cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x33c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33c1d0:
    // 0x33c1d0: 0xc0e94bc  jal         func_3A52F0
label_33c1d4:
    if (ctx->pc == 0x33C1D4u) {
        ctx->pc = 0x33C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1D0u;
        // 0x33c1d4: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C1D8u;
        goto label_33c1d8;
    }
    ctx->pc = 0x33C1D0u;
    SET_GPR_U32(ctx, 31, 0x33C1D8u);
    ctx->pc = 0x33C1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C1D0u;
    // 0x33c1d4: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33C1D0u, 0x33C1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C1D8u;
label_33c1d8:
    // 0x33c1d8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x33c1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33c1dc:
    // 0x33c1dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c1e0:
    // 0x33c1e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c1e4:
    // 0x33c1e4: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x33c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_33c1e8:
    // 0x33c1e8: 0x60f809  jalr        $v1
label_33c1ec:
    if (ctx->pc == 0x33C1ECu) {
        ctx->pc = 0x33C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1E8u;
        // 0x33c1ec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C1F0u;
        goto label_33c1f0;
    }
    ctx->pc = 0x33C1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33C1F0u);
        ctx->pc = 0x33C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1E8u;
        // 0x33c1ec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C1E8u, 0x33C1F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C1F0u;
label_33c1f0:
    // 0x33c1f0: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x33c1f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_33c1f4:
    // 0x33c1f4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x33c1f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_33c1f8:
    // 0x33c1f8: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
label_33c1fc:
    if (ctx->pc == 0x33C1FCu) {
        ctx->pc = 0x33C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1F8u;
        // 0x33c1fc: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C200u;
        goto label_33c200;
    }
    ctx->pc = 0x33C1F8u;
    {
        const bool branch_taken_0x33c1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c1f8) {
            ctx->pc = 0x33C1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C1F8u;
            // 0x33c1fc: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c180;
        }
    }
    ctx->pc = 0x33C200u;
label_33c200:
    // 0x33c200: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33c200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33c204:
    // 0x33c204: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33c204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33c208:
    // 0x33c208: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x33c208u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_33c20c:
    // 0x33c20c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33c20cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33c210:
    // 0x33c210: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33c210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33c214:
    // 0x33c214: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x33c214u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_33c218:
    // 0x33c218: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33c218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_33c21c:
    // 0x33c21c: 0x3e00008  jr          $ra
label_33c220:
    if (ctx->pc == 0x33C220u) {
        ctx->pc = 0x33C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C21Cu;
        // 0x33c220: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C224u;
        goto label_33c224;
    }
    ctx->pc = 0x33C21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C21Cu;
        // 0x33c220: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C224u;
label_33c224:
    // 0x33c224: 0x0  nop
    ctx->pc = 0x33c224u;
    // NOP
    ctx->pc = 0x33c228u;
}
