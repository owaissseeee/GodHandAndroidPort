#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __cp_pop_exception
// Address: 0x7ca090 - 0x7ca158
void ps2___cp_pop_exception_0x7ca090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___cp_pop_exception_0x7ca090");
#endif

    switch (ctx->pc) {
        case 0x7ca090u: goto label_7ca090;
        case 0x7ca094u: goto label_7ca094;
        case 0x7ca098u: goto label_7ca098;
        case 0x7ca09cu: goto label_7ca09c;
        case 0x7ca0a0u: goto label_7ca0a0;
        case 0x7ca0a4u: goto label_7ca0a4;
        case 0x7ca0a8u: goto label_7ca0a8;
        case 0x7ca0acu: goto label_7ca0ac;
        case 0x7ca0b0u: goto label_7ca0b0;
        case 0x7ca0b4u: goto label_7ca0b4;
        case 0x7ca0b8u: goto label_7ca0b8;
        case 0x7ca0bcu: goto label_7ca0bc;
        case 0x7ca0c0u: goto label_7ca0c0;
        case 0x7ca0c4u: goto label_7ca0c4;
        case 0x7ca0c8u: goto label_7ca0c8;
        case 0x7ca0ccu: goto label_7ca0cc;
        case 0x7ca0d0u: goto label_7ca0d0;
        case 0x7ca0d4u: goto label_7ca0d4;
        case 0x7ca0d8u: goto label_7ca0d8;
        case 0x7ca0dcu: goto label_7ca0dc;
        case 0x7ca0e0u: goto label_7ca0e0;
        case 0x7ca0e4u: goto label_7ca0e4;
        case 0x7ca0e8u: goto label_7ca0e8;
        case 0x7ca0ecu: goto label_7ca0ec;
        case 0x7ca0f0u: goto label_7ca0f0;
        case 0x7ca0f4u: goto label_7ca0f4;
        case 0x7ca0f8u: goto label_7ca0f8;
        case 0x7ca0fcu: goto label_7ca0fc;
        case 0x7ca100u: goto label_7ca100;
        case 0x7ca104u: goto label_7ca104;
        case 0x7ca108u: goto label_7ca108;
        case 0x7ca10cu: goto label_7ca10c;
        case 0x7ca110u: goto label_7ca110;
        case 0x7ca114u: goto label_7ca114;
        case 0x7ca118u: goto label_7ca118;
        case 0x7ca11cu: goto label_7ca11c;
        case 0x7ca120u: goto label_7ca120;
        case 0x7ca124u: goto label_7ca124;
        case 0x7ca128u: goto label_7ca128;
        case 0x7ca12cu: goto label_7ca12c;
        case 0x7ca130u: goto label_7ca130;
        case 0x7ca134u: goto label_7ca134;
        case 0x7ca138u: goto label_7ca138;
        case 0x7ca13cu: goto label_7ca13c;
        case 0x7ca140u: goto label_7ca140;
        case 0x7ca144u: goto label_7ca144;
        case 0x7ca148u: goto label_7ca148;
        case 0x7ca14cu: goto label_7ca14c;
        case 0x7ca150u: goto label_7ca150;
        case 0x7ca154u: goto label_7ca154;
        default: break;
    }

    ctx->pc = 0x7ca090u;

label_7ca090:
    // 0x7ca090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ca090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_7ca094:
    // 0x7ca094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7ca094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_7ca098:
    // 0x7ca098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7ca098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_7ca09c:
    // 0x7ca09c: 0xc1f2d0c  jal         func_7CB430
label_7ca0a0:
    if (ctx->pc == 0x7CA0A0u) {
        ctx->pc = 0x7CA0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA09Cu;
        // 0x7ca0a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA0A4u;
        goto label_7ca0a4;
    }
    ctx->pc = 0x7CA09Cu;
    SET_GPR_U32(ctx, 31, 0x7CA0A4u);
    ctx->pc = 0x7CA0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA09Cu;
    // 0x7ca0a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB430u, 0x7CA09Cu, 0x7CA0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA0A4u;
label_7ca0a4:
    // 0x7ca0a4: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x7ca0a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_7ca0a8:
    // 0x7ca0a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7ca0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ca0ac:
    // 0x7ca0ac: 0x6463ffff  daddiu      $v1, $v1, -0x1
    ctx->pc = 0x7ca0acu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
label_7ca0b0:
    // 0x7ca0b0: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_7ca0b4:
    if (ctx->pc == 0x7CA0B4u) {
        ctx->pc = 0x7CA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA0B0u;
        // 0x7ca0b4: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA0B8u;
        goto label_7ca0b8;
    }
    ctx->pc = 0x7CA0B0u;
    {
        const bool branch_taken_0x7ca0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA0B0u;
        // 0x7ca0b4: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca0b0) {
            ctx->pc = 0x7CA144u;
            goto label_7ca144;
        }
    }
    ctx->pc = 0x7CA0B8u;
label_7ca0b8:
    // 0x7ca0b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x7ca0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_7ca0bc:
    // 0x7ca0bc: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
label_7ca0c0:
    if (ctx->pc == 0x7CA0C0u) {
        ctx->pc = 0x7CA0C4u;
        goto label_7ca0c4;
    }
    ctx->pc = 0x7CA0BCu;
    {
        const bool branch_taken_0x7ca0bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x7ca0bc) {
            ctx->pc = 0x7CA0D0u;
            goto label_7ca0d0;
        }
    }
    ctx->pc = 0x7CA0C4u;
label_7ca0c4:
    // 0x7ca0c4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x7ca0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_7ca0c8:
    // 0x7ca0c8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_7ca0cc:
    if (ctx->pc == 0x7CA0CCu) {
        ctx->pc = 0x7CA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA0C8u;
        // 0x7ca0cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA0D0u;
        goto label_7ca0d0;
    }
    ctx->pc = 0x7CA0C8u;
    {
        const bool branch_taken_0x7ca0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA0C8u;
        // 0x7ca0cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca0c8) {
            ctx->pc = 0x7CA148u;
            goto label_7ca148;
        }
    }
    ctx->pc = 0x7CA0D0u;
label_7ca0d0:
    // 0x7ca0d0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_7ca0d4:
    if (ctx->pc == 0x7CA0D4u) {
        ctx->pc = 0x7CA0D8u;
        goto label_7ca0d8;
    }
    ctx->pc = 0x7CA0D0u;
    {
        const bool branch_taken_0x7ca0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ca0d0) {
            ctx->pc = 0x7CA104u;
            goto label_7ca104;
        }
    }
    ctx->pc = 0x7CA0D8u;
label_7ca0d8:
    // 0x7ca0d8: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
label_7ca0dc:
    if (ctx->pc == 0x7CA0DCu) {
        ctx->pc = 0x7CA0E0u;
        goto label_7ca0e0;
    }
    ctx->pc = 0x7CA0D8u;
    {
        const bool branch_taken_0x7ca0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x7ca0d8) {
            ctx->pc = 0x7CA0FCu;
            goto label_7ca0fc;
        }
    }
    ctx->pc = 0x7CA0E0u;
label_7ca0e0:
    // 0x7ca0e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_7ca0e4:
    if (ctx->pc == 0x7CA0E4u) {
        ctx->pc = 0x7CA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA0E0u;
        // 0x7ca0e4: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA0E8u;
        goto label_7ca0e8;
    }
    ctx->pc = 0x7CA0E0u;
    {
        const bool branch_taken_0x7ca0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA0E0u;
        // 0x7ca0e4: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca0e0) {
            ctx->pc = 0x7CA0ECu;
            goto label_7ca0ec;
        }
    }
    ctx->pc = 0x7CA0E8u;
label_7ca0e8:
    // 0x7ca0e8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x7ca0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_7ca0ec:
    // 0x7ca0ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_7ca0f0:
    if (ctx->pc == 0x7CA0F0u) {
        ctx->pc = 0x7CA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA0ECu;
        // 0x7ca0f0: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA0F4u;
        goto label_7ca0f4;
    }
    ctx->pc = 0x7CA0ECu;
    {
        const bool branch_taken_0x7ca0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA0ECu;
        // 0x7ca0f0: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca0ec) {
            ctx->pc = 0x7CA104u;
            goto label_7ca104;
        }
    }
    ctx->pc = 0x7CA0F4u;
label_7ca0f4:
    // 0x7ca0f4: 0x1450fffc  bne         $v0, $s0, . + 4 + (-0x4 << 2)
label_7ca0f8:
    if (ctx->pc == 0x7CA0F8u) {
        ctx->pc = 0x7CA0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA0F4u;
        // 0x7ca0f8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA0FCu;
        goto label_7ca0fc;
    }
    ctx->pc = 0x7CA0F4u;
    {
        const bool branch_taken_0x7ca0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x7CA0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA0F4u;
        // 0x7ca0f8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca0f4) {
            ctx->pc = 0x7CA0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ca0e8;
        }
    }
    ctx->pc = 0x7CA0FCu;
label_7ca0fc:
    // 0x7ca0fc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_7ca100:
    if (ctx->pc == 0x7CA100u) {
        ctx->pc = 0x7CA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA0FCu;
        // 0x7ca100: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA104u;
        goto label_7ca104;
    }
    ctx->pc = 0x7CA0FCu;
    {
        const bool branch_taken_0x7ca0fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ca0fc) {
            ctx->pc = 0x7CA100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CA0FCu;
            // 0x7ca100: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CA10Cu;
            goto label_7ca10c;
        }
    }
    ctx->pc = 0x7CA104u;
label_7ca104:
    // 0x7ca104: 0xc1f279a  jal         func_7C9E68
label_7ca108:
    if (ctx->pc == 0x7CA108u) {
        ctx->pc = 0x7CA10Cu;
        goto label_7ca10c;
    }
    ctx->pc = 0x7CA104u;
    SET_GPR_U32(ctx, 31, 0x7CA10Cu);
    ctx->pc = 0x7C9E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9E68u, 0x7CA104u, 0x7CA10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA10Cu;
label_7ca10c:
    // 0x7ca10c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x7ca10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_7ca110:
    // 0x7ca110: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7ca114:
    if (ctx->pc == 0x7CA114u) {
        ctx->pc = 0x7CA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA110u;
        // 0x7ca114: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA118u;
        goto label_7ca118;
    }
    ctx->pc = 0x7CA110u;
    {
        const bool branch_taken_0x7ca110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA110u;
        // 0x7ca114: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ca110) {
            ctx->pc = 0x7CA124u;
            goto label_7ca124;
        }
    }
    ctx->pc = 0x7CA118u;
label_7ca118:
    // 0x7ca118: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x7ca118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_7ca11c:
    // 0x7ca11c: 0x60f809  jalr        $v1
label_7ca120:
    if (ctx->pc == 0x7CA120u) {
        ctx->pc = 0x7CA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA11Cu;
        // 0x7ca120: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA124u;
        goto label_7ca124;
    }
    ctx->pc = 0x7CA11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7CA124u);
        ctx->pc = 0x7CA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA11Cu;
        // 0x7ca120: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CA11Cu, 0x7CA124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CA124u;
label_7ca124:
    // 0x7ca124: 0xc1f2aac  jal         func_7CAAB0
label_7ca128:
    if (ctx->pc == 0x7CA128u) {
        ctx->pc = 0x7CA128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA124u;
        // 0x7ca128: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA12Cu;
        goto label_7ca12c;
    }
    ctx->pc = 0x7CA124u;
    SET_GPR_U32(ctx, 31, 0x7CA12Cu);
    ctx->pc = 0x7CA128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA124u;
    // 0x7ca128: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CAAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CAAB0u, 0x7CA124u, 0x7CA12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA12Cu;
label_7ca12c:
    // 0x7ca12c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_7ca130:
    if (ctx->pc == 0x7CA130u) {
        ctx->pc = 0x7CA134u;
        goto label_7ca134;
    }
    ctx->pc = 0x7CA12Cu;
    {
        const bool branch_taken_0x7ca12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ca12c) {
            ctx->pc = 0x7CA13Cu;
            goto label_7ca13c;
        }
    }
    ctx->pc = 0x7CA134u;
label_7ca134:
    // 0x7ca134: 0xc1f27dc  jal         func_7C9F70
label_7ca138:
    if (ctx->pc == 0x7CA138u) {
        ctx->pc = 0x7CA138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA134u;
        // 0x7ca138: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA13Cu;
        goto label_7ca13c;
    }
    ctx->pc = 0x7CA134u;
    SET_GPR_U32(ctx, 31, 0x7CA13Cu);
    ctx->pc = 0x7CA138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA134u;
    // 0x7ca138: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9F70u, 0x7CA134u, 0x7CA13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA13Cu;
label_7ca13c:
    // 0x7ca13c: 0xc1f27dc  jal         func_7C9F70
label_7ca140:
    if (ctx->pc == 0x7CA140u) {
        ctx->pc = 0x7CA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA13Cu;
        // 0x7ca140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA144u;
        goto label_7ca144;
    }
    ctx->pc = 0x7CA13Cu;
    SET_GPR_U32(ctx, 31, 0x7CA144u);
    ctx->pc = 0x7CA140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CA13Cu;
    // 0x7ca140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9F70u, 0x7CA13Cu, 0x7CA144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CA144u;
label_7ca144:
    // 0x7ca144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7ca144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7ca148:
    // 0x7ca148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7ca148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7ca14c:
    // 0x7ca14c: 0x3e00008  jr          $ra
label_7ca150:
    if (ctx->pc == 0x7CA150u) {
        ctx->pc = 0x7CA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA14Cu;
        // 0x7ca150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA154u;
        goto label_7ca154;
    }
    ctx->pc = 0x7CA14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA14Cu;
        // 0x7ca150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CA14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CA154u;
label_7ca154:
    // 0x7ca154: 0x0  nop
    ctx->pc = 0x7ca154u;
    // NOP
    ctx->pc = 0x7ca158u;
}
} // namespace gh_mcport
