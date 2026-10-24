#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: __do_global_ctors
// Address: 0x7b2910 - 0x7b29c0
void ps2___do_global_ctors_0x7b2910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x7b2910");
#endif

    switch (ctx->pc) {
        case 0x7b2910u: goto label_7b2910;
        case 0x7b2914u: goto label_7b2914;
        case 0x7b2918u: goto label_7b2918;
        case 0x7b291cu: goto label_7b291c;
        case 0x7b2920u: goto label_7b2920;
        case 0x7b2924u: goto label_7b2924;
        case 0x7b2928u: goto label_7b2928;
        case 0x7b292cu: goto label_7b292c;
        case 0x7b2930u: goto label_7b2930;
        case 0x7b2934u: goto label_7b2934;
        case 0x7b2938u: goto label_7b2938;
        case 0x7b293cu: goto label_7b293c;
        case 0x7b2940u: goto label_7b2940;
        case 0x7b2944u: goto label_7b2944;
        case 0x7b2948u: goto label_7b2948;
        case 0x7b294cu: goto label_7b294c;
        case 0x7b2950u: goto label_7b2950;
        case 0x7b2954u: goto label_7b2954;
        case 0x7b2958u: goto label_7b2958;
        case 0x7b295cu: goto label_7b295c;
        case 0x7b2960u: goto label_7b2960;
        case 0x7b2964u: goto label_7b2964;
        case 0x7b2968u: goto label_7b2968;
        case 0x7b296cu: goto label_7b296c;
        case 0x7b2970u: goto label_7b2970;
        case 0x7b2974u: goto label_7b2974;
        case 0x7b2978u: goto label_7b2978;
        case 0x7b297cu: goto label_7b297c;
        case 0x7b2980u: goto label_7b2980;
        case 0x7b2984u: goto label_7b2984;
        case 0x7b2988u: goto label_7b2988;
        case 0x7b298cu: goto label_7b298c;
        case 0x7b2990u: goto label_7b2990;
        case 0x7b2994u: goto label_7b2994;
        case 0x7b2998u: goto label_7b2998;
        case 0x7b299cu: goto label_7b299c;
        case 0x7b29a0u: goto label_7b29a0;
        case 0x7b29a4u: goto label_7b29a4;
        case 0x7b29a8u: goto label_7b29a8;
        case 0x7b29acu: goto label_7b29ac;
        case 0x7b29b0u: goto label_7b29b0;
        case 0x7b29b4u: goto label_7b29b4;
        case 0x7b29b8u: goto label_7b29b8;
        case 0x7b29bcu: goto label_7b29bc;
        default: break;
    }

    ctx->pc = 0x7b2910u;

label_7b2910:
    // 0x7b2910: 0x3c07007b  lui         $a3, 0x7B
    ctx->pc = 0x7b2910u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)123 << 16));
label_7b2914:
    // 0x7b2914: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7b2914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_7b2918:
    // 0x7b2918: 0x8ce54b14  lw          $a1, 0x4B14($a3)
    ctx->pc = 0x7b2918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 19220)));
label_7b291c:
    // 0x7b291c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7b291cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7b2920:
    // 0x7b2920: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7b2920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_7b2924:
    // 0x7b2924: 0x24e34b14  addiu       $v1, $a3, 0x4B14
    ctx->pc = 0x7b2924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 19220));
label_7b2928:
    // 0x7b2928: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7b2928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_7b292c:
    // 0x7b292c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_7b2930:
    if (ctx->pc == 0x7B2930u) {
        ctx->pc = 0x7B2930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B292Cu;
        // 0x7b2930: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7B2934u;
        goto label_7b2934;
    }
    ctx->pc = 0x7B292Cu;
    {
        const bool branch_taken_0x7b292c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B2930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B292Cu;
        // 0x7b2930: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b292c) {
            ctx->pc = 0x7B2974u;
            goto label_7b2974;
        }
    }
    ctx->pc = 0x7B2934u;
label_7b2934:
    // 0x7b2934: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7b2934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7b2938:
    // 0x7b2938: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7b293c:
    if (ctx->pc == 0x7B293Cu) {
        ctx->pc = 0x7B293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2938u;
        // 0x7b293c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7B2940u;
        goto label_7b2940;
    }
    ctx->pc = 0x7B2938u;
    {
        const bool branch_taken_0x7b2938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2938u;
        // 0x7b293c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2938) {
            ctx->pc = 0x7B2974u;
            goto label_7b2974;
        }
    }
    ctx->pc = 0x7B2940u;
label_7b2940:
    // 0x7b2940: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7b2940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7b2944:
    // 0x7b2944: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7b2944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7b2948:
    // 0x7b2948: 0x24e44b14  addiu       $a0, $a3, 0x4B14
    ctx->pc = 0x7b2948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 19220));
label_7b294c:
    // 0x7b294c: 0x0  nop
    ctx->pc = 0x7b294cu;
    // NOP
label_7b2950:
    // 0x7b2950: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x7b2950u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_7b2954:
    // 0x7b2954: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7b2954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7b2958:
    // 0x7b2958: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x7b2958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_7b295c:
    // 0x7b295c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x7b295cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_7b2960:
    // 0x7b2960: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7b2960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_7b2964:
    // 0x7b2964: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7b2964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_7b2968:
    // 0x7b2968: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7b2968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7b296c:
    // 0x7b296c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_7b2970:
    if (ctx->pc == 0x7B2970u) {
        ctx->pc = 0x7B2970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B296Cu;
        // 0x7b2970: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7B2974u;
        goto label_7b2974;
    }
    ctx->pc = 0x7B296Cu;
    {
        const bool branch_taken_0x7b296c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b296c) {
            ctx->pc = 0x7B2970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B296Cu;
            // 0x7b2970: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b2950;
        }
    }
    ctx->pc = 0x7B2974u;
label_7b2974:
    // 0x7b2974: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x7b2974u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_7b2978:
    // 0x7b2978: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x7b2978u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_7b297c:
    // 0x7b297c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_7b2980:
    if (ctx->pc == 0x7B2980u) {
        ctx->pc = 0x7B2980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B297Cu;
        // 0x7b2980: 0x3c02007b  lui         $v0, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7B2984u;
        goto label_7b2984;
    }
    ctx->pc = 0x7B297Cu;
    {
        const bool branch_taken_0x7b297c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B2980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B297Cu;
        // 0x7b2980: 0x3c02007b  lui         $v0, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b297c) {
            ctx->pc = 0x7B29ACu;
            goto label_7b29ac;
        }
    }
    ctx->pc = 0x7B2984u;
label_7b2984:
    // 0x7b2984: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x7b2984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_7b2988:
    // 0x7b2988: 0x24424b14  addiu       $v0, $v0, 0x4B14
    ctx->pc = 0x7b2988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19220));
label_7b298c:
    // 0x7b298c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x7b298cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_7b2990:
    // 0x7b2990: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7b2990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7b2994:
    // 0x7b2994: 0x0  nop
    ctx->pc = 0x7b2994u;
    // NOP
label_7b2998:
    // 0x7b2998: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x7b2998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_7b299c:
    // 0x7b299c: 0x40f809  jalr        $v0
label_7b29a0:
    if (ctx->pc == 0x7B29A0u) {
        ctx->pc = 0x7B29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B299Cu;
        // 0x7b29a0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7B29A4u;
        goto label_7b29a4;
    }
    ctx->pc = 0x7B299Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7B29A4u);
        ctx->pc = 0x7B29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B299Cu;
        // 0x7b29a0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B299Cu, 0x7B29A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7B29A4u;
label_7b29a4:
    // 0x7b29a4: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_7b29a8:
    if (ctx->pc == 0x7B29A8u) {
        ctx->pc = 0x7B29A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B29A4u;
        // 0x7b29a8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7B29ACu;
        goto label_7b29ac;
    }
    ctx->pc = 0x7B29A4u;
    {
        const bool branch_taken_0x7b29a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b29a4) {
            ctx->pc = 0x7B29A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B29A4u;
            // 0x7b29a8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B2998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b2998;
        }
    }
    ctx->pc = 0x7B29ACu;
label_7b29ac:
    // 0x7b29ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7b29acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7b29b0:
    // 0x7b29b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7b29b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7b29b4:
    // 0x7b29b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7b29b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7b29b8:
    // 0x7b29b8: 0x3e00008  jr          $ra
label_7b29bc:
    if (ctx->pc == 0x7B29BCu) {
        ctx->pc = 0x7B29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B29B8u;
        // 0x7b29bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7B29C0u;
        goto label_fallthrough_0x7b29b8;
    }
    ctx->pc = 0x7B29B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B29B8u;
        // 0x7b29bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B29B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7b29b8:
    ctx->pc = 0x7B29C0u;
}
} // namespace gh_event
