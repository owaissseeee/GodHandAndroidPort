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

// Function: func_003600E8
// Address: 0x3600e8 - 0x360200
void func_003600E8_0x3600e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003600E8_0x3600e8");
#endif

    switch (ctx->pc) {
        case 0x360134u: goto label_360134;
        case 0x360168u: goto label_360168;
        case 0x360184u: goto label_360184;
        case 0x3601a8u: goto label_3601a8;
        case 0x3601ccu: goto label_3601cc;
        default: break;
    }

    ctx->pc = 0x3600e8u;

    // 0x3600e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3600e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3600ec: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3600ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3600f0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3600f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3600f4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x3600f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x3600f8: 0x2453a068  addiu       $s3, $v0, -0x5F98
    ctx->pc = 0x3600f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942824));
    // 0x3600fc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3600fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x360100: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x360100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x360104: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x360104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360108: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x360108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x36010c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x36010cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360110: 0x2465a078  addiu       $a1, $v1, -0x5F88
    ctx->pc = 0x360110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942840));
    // 0x360114: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x360114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360118: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x360118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36011c: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x36011cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x360120: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x360120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360124: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x360124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x360128: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x360128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x36012c: 0xc0d8080  jal         func_360200
    ctx->pc = 0x36012Cu;
    SET_GPR_U32(ctx, 31, 0x360134u);
    ctx->pc = 0x360130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36012Cu;
    // 0x360130: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360200u, 0x36012Cu, 0x360134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360134u;
label_360134:
    // 0x360134: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x360134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x360138: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x360138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36013c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x36013cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x360140: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x360140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x360144: 0x24a5a080  addiu       $a1, $a1, -0x5F80
    ctx->pc = 0x360144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942848));
    // 0x360148: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x360148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x36014c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36014Cu;
    {
        const bool branch_taken_0x36014c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x360150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36014Cu;
        // 0x360150: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36014c) {
            ctx->pc = 0x360160u;
            goto label_360160;
        }
    }
    ctx->pc = 0x360154u;
    // 0x360154: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x360154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x360158: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x360158u;
    {
        const bool branch_taken_0x360158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360158u;
        // 0x36015c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360158) {
            ctx->pc = 0x3601DCu;
            goto label_3601dc;
        }
    }
    ctx->pc = 0x360160u;
label_360160:
    // 0x360160: 0xc0e9b38  jal         func_3A6CE0
    ctx->pc = 0x360160u;
    SET_GPR_U32(ctx, 31, 0x360168u);
    ctx->pc = 0x3A6CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6CE0u, 0x360160u, 0x360168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360168u;
label_360168:
    // 0x360168: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x360168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x36016c: 0x24a5a088  addiu       $a1, $a1, -0x5F78
    ctx->pc = 0x36016cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942856));
    // 0x360170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x360170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360174: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x360174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360178: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x360178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36017c: 0xc0d8080  jal         func_360200
    ctx->pc = 0x36017Cu;
    SET_GPR_U32(ctx, 31, 0x360184u);
    ctx->pc = 0x360180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36017Cu;
    // 0x360180: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360200u, 0x36017Cu, 0x360184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360184u;
label_360184:
    // 0x360184: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x360184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360188: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x360188u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36018c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x36018cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x360190: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x360190u;
    {
        const bool branch_taken_0x360190 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x360194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360190u;
        // 0x360194: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x360190) {
            ctx->pc = 0x3601A0u;
            goto label_3601a0;
        }
    }
    ctx->pc = 0x360198u;
    // 0x360198: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x360198u;
    {
        const bool branch_taken_0x360198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360198u;
        // 0x36019c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360198) {
            ctx->pc = 0x3601DCu;
            goto label_3601dc;
        }
    }
    ctx->pc = 0x3601A0u;
label_3601a0:
    // 0x3601a0: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x3601A0u;
    SET_GPR_U32(ctx, 31, 0x3601A8u);
    ctx->pc = 0x3601A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3601A0u;
    // 0x3601a4: 0xdfa40008  ld          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x3601A0u, 0x3601A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601A8u;
label_3601a8:
    // 0x3601a8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3601a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3601ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3601acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3601b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3601b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3601b4: 0x24a5a090  addiu       $a1, $a1, -0x5F70
    ctx->pc = 0x3601b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942864));
    // 0x3601b8: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x3601b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3601bc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3601bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3601c0: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x3601c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x3601c4: 0xc0e9b38  jal         func_3A6CE0
    ctx->pc = 0x3601C4u;
    SET_GPR_U32(ctx, 31, 0x3601CCu);
    ctx->pc = 0x3601C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3601C4u;
    // 0x3601c8: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6CE0u, 0x3601C4u, 0x3601CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601CCu;
label_3601cc:
    // 0x3601cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3601ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3601d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3601d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3601d4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3601d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3601d8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3601d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3601dc:
    // 0x3601dc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3601dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3601e0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3601e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3601e4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3601e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3601e8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x3601e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3601ec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3601ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3601f0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3601f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3601f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3601F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3601F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3601F4u;
        // 0x3601f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3601F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3601FCu;
    // 0x3601fc: 0x0  nop
    ctx->pc = 0x3601fcu;
    // NOP
    ctx->pc = 0x360200u;
}
