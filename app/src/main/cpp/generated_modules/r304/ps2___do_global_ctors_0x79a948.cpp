#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: __do_global_ctors
// Address: 0x79a948 - 0x79a9f8
void ps2___do_global_ctors_0x79a948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79a948");
#endif

    switch (ctx->pc) {
        case 0x79a948u: goto label_79a948;
        case 0x79a94cu: goto label_79a94c;
        case 0x79a950u: goto label_79a950;
        case 0x79a954u: goto label_79a954;
        case 0x79a958u: goto label_79a958;
        case 0x79a95cu: goto label_79a95c;
        case 0x79a960u: goto label_79a960;
        case 0x79a964u: goto label_79a964;
        case 0x79a968u: goto label_79a968;
        case 0x79a96cu: goto label_79a96c;
        case 0x79a970u: goto label_79a970;
        case 0x79a974u: goto label_79a974;
        case 0x79a978u: goto label_79a978;
        case 0x79a97cu: goto label_79a97c;
        case 0x79a980u: goto label_79a980;
        case 0x79a984u: goto label_79a984;
        case 0x79a988u: goto label_79a988;
        case 0x79a98cu: goto label_79a98c;
        case 0x79a990u: goto label_79a990;
        case 0x79a994u: goto label_79a994;
        case 0x79a998u: goto label_79a998;
        case 0x79a99cu: goto label_79a99c;
        case 0x79a9a0u: goto label_79a9a0;
        case 0x79a9a4u: goto label_79a9a4;
        case 0x79a9a8u: goto label_79a9a8;
        case 0x79a9acu: goto label_79a9ac;
        case 0x79a9b0u: goto label_79a9b0;
        case 0x79a9b4u: goto label_79a9b4;
        case 0x79a9b8u: goto label_79a9b8;
        case 0x79a9bcu: goto label_79a9bc;
        case 0x79a9c0u: goto label_79a9c0;
        case 0x79a9c4u: goto label_79a9c4;
        case 0x79a9c8u: goto label_79a9c8;
        case 0x79a9ccu: goto label_79a9cc;
        case 0x79a9d0u: goto label_79a9d0;
        case 0x79a9d4u: goto label_79a9d4;
        case 0x79a9d8u: goto label_79a9d8;
        case 0x79a9dcu: goto label_79a9dc;
        case 0x79a9e0u: goto label_79a9e0;
        case 0x79a9e4u: goto label_79a9e4;
        case 0x79a9e8u: goto label_79a9e8;
        case 0x79a9ecu: goto label_79a9ec;
        case 0x79a9f0u: goto label_79a9f0;
        case 0x79a9f4u: goto label_79a9f4;
        default: break;
    }

    ctx->pc = 0x79a948u;

label_79a948:
    // 0x79a948: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79a948u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79a94c:
    // 0x79a94c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a94cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79a950:
    // 0x79a950: 0x8ce5ac80  lw          $a1, -0x5380($a3)
    ctx->pc = 0x79a950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945920)));
label_79a954:
    // 0x79a954: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79a954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a958:
    // 0x79a958: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79a95c:
    // 0x79a95c: 0x24e3ac80  addiu       $v1, $a3, -0x5380
    ctx->pc = 0x79a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945920));
label_79a960:
    // 0x79a960: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79a960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79a964:
    // 0x79a964: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79a968:
    if (ctx->pc == 0x79A968u) {
        ctx->pc = 0x79A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A964u;
        // 0x79a968: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A96Cu;
        goto label_79a96c;
    }
    ctx->pc = 0x79A964u;
    {
        const bool branch_taken_0x79a964 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A964u;
        // 0x79a968: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a964) {
            ctx->pc = 0x79A9ACu;
            goto label_79a9ac;
        }
    }
    ctx->pc = 0x79A96Cu;
label_79a96c:
    // 0x79a96c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79a970:
    // 0x79a970: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a974:
    if (ctx->pc == 0x79A974u) {
        ctx->pc = 0x79A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A970u;
        // 0x79a974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A978u;
        goto label_79a978;
    }
    ctx->pc = 0x79A970u;
    {
        const bool branch_taken_0x79a970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A970u;
        // 0x79a974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a970) {
            ctx->pc = 0x79A9ACu;
            goto label_79a9ac;
        }
    }
    ctx->pc = 0x79A978u;
label_79a978:
    // 0x79a978: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a97c:
    // 0x79a97c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79a97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79a980:
    // 0x79a980: 0x24e4ac80  addiu       $a0, $a3, -0x5380
    ctx->pc = 0x79a980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945920));
label_79a984:
    // 0x79a984: 0x0  nop
    ctx->pc = 0x79a984u;
    // NOP
label_79a988:
    // 0x79a988: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79a988u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79a98c:
    // 0x79a98c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a98cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a990:
    // 0x79a990: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79a990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79a994:
    // 0x79a994: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79a994u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79a998:
    // 0x79a998: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79a99c:
    // 0x79a99c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79a9a0:
    // 0x79a9a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a9a4:
    // 0x79a9a4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79a9a8:
    if (ctx->pc == 0x79A9A8u) {
        ctx->pc = 0x79A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9A4u;
        // 0x79a9a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9ACu;
        goto label_79a9ac;
    }
    ctx->pc = 0x79A9A4u;
    {
        const bool branch_taken_0x79a9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a9a4) {
            ctx->pc = 0x79A9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A9A4u;
            // 0x79a9a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a988;
        }
    }
    ctx->pc = 0x79A9ACu;
label_79a9ac:
    // 0x79a9ac: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79a9acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79a9b0:
    // 0x79a9b0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79a9b0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79a9b4:
    // 0x79a9b4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79a9b8:
    if (ctx->pc == 0x79A9B8u) {
        ctx->pc = 0x79A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9B4u;
        // 0x79a9b8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9BCu;
        goto label_79a9bc;
    }
    ctx->pc = 0x79A9B4u;
    {
        const bool branch_taken_0x79a9b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9B4u;
        // 0x79a9b8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9b4) {
            ctx->pc = 0x79A9E4u;
            goto label_79a9e4;
        }
    }
    ctx->pc = 0x79A9BCu;
label_79a9bc:
    // 0x79a9bc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79a9c0:
    // 0x79a9c0: 0x2442ac80  addiu       $v0, $v0, -0x5380
    ctx->pc = 0x79a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945920));
label_79a9c4:
    // 0x79a9c4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79a9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a9c8:
    // 0x79a9c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79a9cc:
    // 0x79a9cc: 0x0  nop
    ctx->pc = 0x79a9ccu;
    // NOP
label_79a9d0:
    // 0x79a9d0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79a9d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79a9d4:
    // 0x79a9d4: 0x40f809  jalr        $v0
label_79a9d8:
    if (ctx->pc == 0x79A9D8u) {
        ctx->pc = 0x79A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9D4u;
        // 0x79a9d8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9DCu;
        goto label_79a9dc;
    }
    ctx->pc = 0x79A9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A9DCu);
        ctx->pc = 0x79A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9D4u;
        // 0x79a9d8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A9D4u, 0x79A9DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A9DCu;
label_79a9dc:
    // 0x79a9dc: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79a9e0:
    if (ctx->pc == 0x79A9E0u) {
        ctx->pc = 0x79A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9DCu;
        // 0x79a9e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9E4u;
        goto label_79a9e4;
    }
    ctx->pc = 0x79A9DCu;
    {
        const bool branch_taken_0x79a9dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a9dc) {
            ctx->pc = 0x79A9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A9DCu;
            // 0x79a9e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a9d0;
        }
    }
    ctx->pc = 0x79A9E4u;
label_79a9e4:
    // 0x79a9e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79a9e8:
    // 0x79a9e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79a9e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a9ec:
    // 0x79a9ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a9f0:
    // 0x79a9f0: 0x3e00008  jr          $ra
label_79a9f4:
    if (ctx->pc == 0x79A9F4u) {
        ctx->pc = 0x79A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9F0u;
        // 0x79a9f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9F8u;
        goto label_fallthrough_0x79a9f0;
    }
    ctx->pc = 0x79A9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9F0u;
        // 0x79a9f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79a9f0:
    ctx->pc = 0x79A9F8u;
}
} // namespace gh_r304
