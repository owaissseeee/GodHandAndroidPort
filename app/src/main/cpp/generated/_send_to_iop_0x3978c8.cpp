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

// Function: _send_to_iop
// Address: 0x3978c8 - 0x3979e0
void _send_to_iop_0x3978c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_send_to_iop_0x3978c8");
#endif

    switch (ctx->pc) {
        case 0x397920u: goto label_397920;
        case 0x39796cu: goto label_39796c;
        case 0x39798cu: goto label_39798c;
        case 0x3979b0u: goto label_3979b0;
        default: break;
    }

    ctx->pc = 0x3978c8u;

    // 0x3978c8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3978c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x3978cc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3978ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3978d0: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x3978d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x3978d4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x3978d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x3978d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3978d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3978dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3978dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3978e0: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x3978e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3978e4: 0x72442018  mult1       $a0, $s2, $a0
    ctx->pc = 0x3978e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3978e8: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x3978e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3978ec: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x3978ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x3978f0: 0x3c130078  lui         $s3, 0x78
    ctx->pc = 0x3978f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)120 << 16));
    // 0x3978f4: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x3978f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x3978f8: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x3978f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x3978fc: 0x2662c110  addiu       $v0, $s3, -0x3EF0
    ctx->pc = 0x3978fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951184));
    // 0x397900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x397900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x397904: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x397904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x397908: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x397908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39790c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x39790cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x397910: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x397910u;
    {
        const bool branch_taken_0x397910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x397914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397910u;
        // 0x397914: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397910) {
            ctx->pc = 0x397928u;
            goto label_397928;
        }
    }
    ctx->pc = 0x397918u;
    // 0x397918: 0xc0ec010  jal         func_3B0040
    ctx->pc = 0x397918u;
    SET_GPR_U32(ctx, 31, 0x397920u);
    ctx->pc = 0x3B0040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0040u, 0x397918u, 0x397920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397920u;
label_397920:
    // 0x397920: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x397920u;
    {
        const bool branch_taken_0x397920 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x397924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397920u;
        // 0x397924: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397920) {
            ctx->pc = 0x39799Cu;
            goto label_39799c;
        }
    }
    ctx->pc = 0x397928u;
label_397928:
    // 0x397928: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x397928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x39792c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x39792cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x397930: 0x2073818  mult        $a3, $s0, $a3
    ctx->pc = 0x397930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x397934: 0x72431818  mult1       $v1, $s2, $v1
    ctx->pc = 0x397934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x397938: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x397938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x39793c: 0x2673c110  addiu       $s3, $s3, -0x3EF0
    ctx->pc = 0x39793cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951184));
    // 0x397940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x397940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397944: 0x2625001f  addiu       $a1, $s1, 0x1F
    ctx->pc = 0x397944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x397948: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x397948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x39794c: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x39794cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x397950: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x397950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x397954: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x397954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x397958: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x397958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x39795c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x39795cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x397960: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x397960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x397964: 0xc0ec144  jal         func_3B0510
    ctx->pc = 0x397964u;
    SET_GPR_U32(ctx, 31, 0x39796Cu);
    ctx->pc = 0x397968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397964u;
    // 0x397968: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0510u, 0x397964u, 0x39796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39796Cu;
label_39796c:
    // 0x39796c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x39796cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x397970: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x397970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x397974: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x397974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x397978: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x397978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39797c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x39797cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x397980: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x397980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397984: 0xc0ec852  jal         func_3B2148
    ctx->pc = 0x397984u;
    SET_GPR_U32(ctx, 31, 0x39798Cu);
    ctx->pc = 0x397988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397984u;
    // 0x397988: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2148u, 0x397984u, 0x39798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39798Cu;
label_39798c:
    // 0x39798c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39798cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397990: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x397990u;
    {
        const bool branch_taken_0x397990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x397994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397990u;
        // 0x397994: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397990) {
            ctx->pc = 0x3979B8u;
            goto label_3979b8;
        }
    }
    ctx->pc = 0x397998u;
    // 0x397998: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x397998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_39799c:
    // 0x39799c: 0x8c4385cc  lw          $v1, -0x7A34($v0)
    ctx->pc = 0x39799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936012)));
    // 0x3979a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3979A0u;
    {
        const bool branch_taken_0x3979a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3979A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979A0u;
        // 0x3979a4: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3979a0) {
            ctx->pc = 0x3979B0u;
            goto label_3979b0;
        }
    }
    ctx->pc = 0x3979A8u;
    // 0x3979a8: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3979A8u;
    SET_GPR_U32(ctx, 31, 0x3979B0u);
    ctx->pc = 0x3979ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3979A8u;
    // 0x3979ac: 0x2484e088  addiu       $a0, $a0, -0x1F78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3979A8u, 0x3979B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3979B0u;
label_3979b0:
    // 0x3979b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3979B0u;
    {
        const bool branch_taken_0x3979b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3979B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979B0u;
        // 0x3979b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3979b0) {
            ctx->pc = 0x3979C0u;
            goto label_3979c0;
        }
    }
    ctx->pc = 0x3979B8u;
label_3979b8:
    // 0x3979b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3979b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3979bc: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x3979bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_3979c0:
    // 0x3979c0: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x3979c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3979c4: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x3979c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3979c8: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x3979c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3979cc: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x3979ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3979d0: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x3979d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3979d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3979D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3979D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3979D4u;
        // 0x3979d8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3979D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3979DCu;
    // 0x3979dc: 0x0  nop
    ctx->pc = 0x3979dcu;
    // NOP
    ctx->pc = 0x3979e0u;
}
