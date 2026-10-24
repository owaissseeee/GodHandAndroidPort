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

// Function: _IO_default_xsputn
// Address: 0x38c8b0 - 0x38c9e8
void ps2__IO_default_xsputn_0x38c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_default_xsputn_0x38c8b0");
#endif

    switch (ctx->pc) {
        case 0x38c8f0u: goto label_38c8f0;
        case 0x38c93cu: goto label_38c93c;
        case 0x38c970u: goto label_38c970;
        case 0x38c9b4u: goto label_38c9b4;
        default: break;
    }

    ctx->pc = 0x38c8b0u;

    // 0x38c8b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38c8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38c8b4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38c8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38c8b8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38c8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38c8bc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x38c8bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c8c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38c8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38c8c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38c8c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c8c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38c8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38c8cc: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x38c8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c8d0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38c8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x38c8d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38c8d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c8d8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x38c8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x38c8dc: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x38C8DCu;
    {
        const bool branch_taken_0x38c8dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8DCu;
        // 0x38c8e0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c8dc) {
            ctx->pc = 0x38C8ECu;
            goto label_38c8ec;
        }
    }
    ctx->pc = 0x38C8E4u;
    // 0x38c8e4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x38C8E4u;
    {
        const bool branch_taken_0x38c8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8E4u;
        // 0x38c8e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c8e4) {
            ctx->pc = 0x38C9C0u;
            goto label_38c9c0;
        }
    }
    ctx->pc = 0x38C8ECu;
label_38c8ec:
    // 0x38c8ec: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x38c8ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38c8f0:
    // 0x38c8f0: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x38c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x38c8f4: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x38c8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x38c8f8: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x38c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x38c8fc: 0x18600028  blez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x38C8FCu;
    {
        const bool branch_taken_0x38c8fc = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x38c8fc) {
            ctx->pc = 0x38C9A0u;
            goto label_38c9a0;
        }
    }
    ctx->pc = 0x38C904u;
    // 0x38c904: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x38c904u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x38c908: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x38c908u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x38c90c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x38c90cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x38c910: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38C910u;
    {
        const bool branch_taken_0x38c910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C910u;
        // 0x38c914: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c910) {
            ctx->pc = 0x38C91Cu;
            goto label_38c91c;
        }
    }
    ctx->pc = 0x38C918u;
    // 0x38c918: 0x2183e  dsrl32      $v1, $v0, 0
    ctx->pc = 0x38c918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
label_38c91c:
    // 0x38c91c: 0x28620015  slti        $v0, $v1, 0x15
    ctx->pc = 0x38c91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x38c920: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38C920u;
    {
        const bool branch_taken_0x38c920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C920u;
        // 0x38c924: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c920) {
            ctx->pc = 0x38C94Cu;
            goto label_38c94c;
        }
    }
    ctx->pc = 0x38C928u;
    // 0x38c928: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x38c928u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x38c92c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x38c92cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x38c930: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38c930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c934: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x38C934u;
    SET_GPR_U32(ctx, 31, 0x38C93Cu);
    ctx->pc = 0x38C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C934u;
    // 0x38c938: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x38C934u, 0x38C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C93Cu;
label_38c93c:
    // 0x38c93c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x38c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x38c940: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x38c940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x38c944: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x38C944u;
    {
        const bool branch_taken_0x38c944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C944u;
        // 0x38c948: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c944) {
            ctx->pc = 0x38C99Cu;
            goto label_38c99c;
        }
    }
    ctx->pc = 0x38C94Cu;
label_38c94c:
    // 0x38c94c: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38C94Cu;
    {
        const bool branch_taken_0x38c94c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x38C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C94Cu;
        // 0x38c950: 0x6465ffff  daddiu      $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c94c) {
            ctx->pc = 0x38C95Cu;
            goto label_38c95c;
        }
    }
    ctx->pc = 0x38C954u;
    // 0x38c954: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x38C954u;
    {
        const bool branch_taken_0x38c954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C954u;
        // 0x38c958: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c954) {
            ctx->pc = 0x38C99Cu;
            goto label_38c99c;
        }
    }
    ctx->pc = 0x38C95Cu;
label_38c95c:
    // 0x38c95c: 0x4a2000d  bltzl       $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x38C95Cu;
    {
        const bool branch_taken_0x38c95c = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x38c95c) {
            ctx->pc = 0x38C960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C95Cu;
            // 0x38c960: 0xae640014  sw          $a0, 0x14($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C994u;
            goto label_38c994;
        }
    }
    ctx->pc = 0x38C964u;
    // 0x38c964: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x38c964u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x38c968: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x38c968u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x38c96c: 0x0  nop
    ctx->pc = 0x38c96cu;
    // NOP
label_38c970:
    // 0x38c970: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x38c970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38c974: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x38c974u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x38c978: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x38c978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x38c97c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x38c97cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x38c980: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38c980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x38c984: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38C984u;
    {
        const bool branch_taken_0x38c984 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x38c984) {
            ctx->pc = 0x38C970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38c970;
        }
    }
    ctx->pc = 0x38C98Cu;
    // 0x38c98c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38C98Cu;
    {
        const bool branch_taken_0x38c98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C98Cu;
        // 0x38c990: 0xae640014  sw          $a0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c98c) {
            ctx->pc = 0x38C99Cu;
            goto label_38c99c;
        }
    }
    ctx->pc = 0x38C994u;
label_38c994:
    // 0x38c994: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x38c994u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x38c998: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x38c998u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_38c99c:
    // 0x38c99c: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x38c99cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_38c9a0:
    // 0x38c9a0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x38C9A0u;
    {
        const bool branch_taken_0x38c9a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C9A0u;
        // 0x38c9a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c9a0) {
            ctx->pc = 0x38C9BCu;
            goto label_38c9bc;
        }
    }
    ctx->pc = 0x38C9A8u;
    // 0x38c9a8: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x38c9a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38c9ac: 0xc0e30fc  jal         func_38C3F0
    ctx->pc = 0x38C9ACu;
    SET_GPR_U32(ctx, 31, 0x38C9B4u);
    ctx->pc = 0x38C9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C9ACu;
    // 0x38c9b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C3F0u, 0x38C9ACu, 0x38C9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C9B4u;
label_38c9b4:
    // 0x38c9b4: 0x5455ffce  bnel        $v0, $s5, . + 4 + (-0x32 << 2)
    ctx->pc = 0x38C9B4u;
    {
        const bool branch_taken_0x38c9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x38c9b4) {
            ctx->pc = 0x38C9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C9B4u;
            // 0x38c9b8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38c8f0;
        }
    }
    ctx->pc = 0x38C9BCu;
label_38c9bc:
    // 0x38c9bc: 0x2921023  subu        $v0, $s4, $s2
    ctx->pc = 0x38c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_38c9c0:
    // 0x38c9c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38c9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38c9c4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x38c9c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38c9c8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38c9c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38c9cc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38c9ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38c9d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38c9d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38c9d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38c9d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c9d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38c9d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x38C9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C9DCu;
        // 0x38c9e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C9E4u;
    // 0x38c9e4: 0x0  nop
    ctx->pc = 0x38c9e4u;
    // NOP
    ctx->pc = 0x38c9e8u;
}
