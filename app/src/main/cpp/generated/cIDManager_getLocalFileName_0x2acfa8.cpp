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

// Function: cIDManager_getLocalFileName
// Address: 0x2acfa8 - 0x2ad108
void cIDManager_getLocalFileName_0x2acfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDManager_getLocalFileName_0x2acfa8");
#endif

    switch (ctx->pc) {
        case 0x2acfe8u: goto label_2acfe8;
        case 0x2ad084u: goto label_2ad084;
        case 0x2ad0a0u: goto label_2ad0a0;
        case 0x2ad0b0u: goto label_2ad0b0;
        case 0x2ad0ccu: goto label_2ad0cc;
        case 0x2ad0d8u: goto label_2ad0d8;
        case 0x2ad0e8u: goto label_2ad0e8;
        default: break;
    }

    ctx->pc = 0x2acfa8u;

    // 0x2acfa8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2acfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2acfac: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2acfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2acfb0: 0x9043af78  lbu         $v1, -0x5088($v0)
    ctx->pc = 0x2acfb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x44AF78u));
    // 0x2acfb4: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x2acfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x2acfb8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2acfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2acfbc: 0x37a40001  ori         $a0, $sp, 0x1
    ctx->pc = 0x2acfbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)1);
    // 0x2acfc0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2acfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2acfc4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2acfc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acfc8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2acfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2acfcc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2acfccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acfd0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2acfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2acfd4: 0x78603  sra         $s0, $a3, 24
    ctx->pc = 0x2acfd4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 7), 24));
    // 0x2acfd8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x2acfd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2acfdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acfe0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2ACFE0u;
    SET_GPR_U32(ctx, 31, 0x2ACFE8u);
    ctx->pc = 0x2ACFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACFE0u;
    // 0x2acfe4: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2ACFE0u, 0x2ACFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACFE8u;
label_2acfe8:
    // 0x2acfe8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2acfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2acfec: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACFECu;
    {
        const bool branch_taken_0x2acfec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ACFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACFECu;
        // 0x2acff0: 0x2e020007  sltiu       $v0, $s0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acfec) {
            ctx->pc = 0x2AD000u;
            goto label_2ad000;
        }
    }
    ctx->pc = 0x2ACFF4u;
    // 0x2acff4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2acff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2acff8: 0x80507a0c  lb          $s0, 0x7A0C($v0)
    ctx->pc = 0x2acff8u;
    SET_GPR_S32(ctx, 16, (int8_t)FAST_READ8(0x747A0Cu));
    // 0x2acffc: 0x2e020007  sltiu       $v0, $s0, 0x7
    ctx->pc = 0x2acffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2ad000:
    // 0x2ad000: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2AD000u;
    {
        const bool branch_taken_0x2ad000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD000u;
        // 0x2ad004: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad000) {
            ctx->pc = 0x2AD0A0u;
            goto label_2ad0a0;
        }
    }
    ctx->pc = 0x2AD008u;
    // 0x2ad008: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ad008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ad00c: 0x2442b020  addiu       $v0, $v0, -0x4FE0
    ctx->pc = 0x2ad00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946848));
    // 0x2ad010: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ad010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ad014: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ad014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad018: 0x800008  jr          $a0
    ctx->pc = 0x2AD018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AD020u: goto label_2ad020;
            case 0x2AD030u: goto label_2ad030;
            case 0x2AD040u: goto label_2ad040;
            case 0x2AD050u: goto label_2ad050;
            case 0x2AD060u: goto label_2ad060;
            case 0x2AD070u: goto label_2ad070;
            case 0x2AD08Cu: goto label_2ad08c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD018u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2AD020u;
label_2ad020:
    // 0x2ad020: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ad020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ad024: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ad024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad028: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2AD028u;
    {
        const bool branch_taken_0x2ad028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD028u;
        // 0x2ad02c: 0x24a5af80  addiu       $a1, $a1, -0x5080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad028) {
            ctx->pc = 0x2AD07Cu;
            goto label_2ad07c;
        }
    }
    ctx->pc = 0x2AD030u;
label_2ad030:
    // 0x2ad030: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ad030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ad034: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ad034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad038: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2AD038u;
    {
        const bool branch_taken_0x2ad038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD038u;
        // 0x2ad03c: 0x24a5af90  addiu       $a1, $a1, -0x5070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad038) {
            ctx->pc = 0x2AD07Cu;
            goto label_2ad07c;
        }
    }
    ctx->pc = 0x2AD040u;
label_2ad040:
    // 0x2ad040: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ad040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ad044: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ad044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad048: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2AD048u;
    {
        const bool branch_taken_0x2ad048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD048u;
        // 0x2ad04c: 0x24a5afa8  addiu       $a1, $a1, -0x5058 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad048) {
            ctx->pc = 0x2AD07Cu;
            goto label_2ad07c;
        }
    }
    ctx->pc = 0x2AD050u;
label_2ad050:
    // 0x2ad050: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ad050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ad054: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ad054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad058: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AD058u;
    {
        const bool branch_taken_0x2ad058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD058u;
        // 0x2ad05c: 0x24a5afc0  addiu       $a1, $a1, -0x5040 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad058) {
            ctx->pc = 0x2AD07Cu;
            goto label_2ad07c;
        }
    }
    ctx->pc = 0x2AD060u;
label_2ad060:
    // 0x2ad060: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ad060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ad064: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ad064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD068u;
    {
        const bool branch_taken_0x2ad068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD068u;
        // 0x2ad06c: 0x24a5afd8  addiu       $a1, $a1, -0x5028 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad068) {
            ctx->pc = 0x2AD07Cu;
            goto label_2ad07c;
        }
    }
    ctx->pc = 0x2AD070u;
label_2ad070:
    // 0x2ad070: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ad070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ad074: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ad074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad078: 0x24a5aff0  addiu       $a1, $a1, -0x5010
    ctx->pc = 0x2ad078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946800));
label_2ad07c:
    // 0x2ad07c: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2AD07Cu;
    SET_GPR_U32(ctx, 31, 0x2AD084u);
    ctx->pc = 0x2AD080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD07Cu;
    // 0x2ad080: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2AD07Cu, 0x2AD084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD084u;
label_2ad084:
    // 0x2ad084: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD084u;
    {
        const bool branch_taken_0x2ad084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD084u;
        // 0x2ad088: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad084) {
            ctx->pc = 0x2AD0A4u;
            goto label_2ad0a4;
        }
    }
    ctx->pc = 0x2AD08Cu;
label_2ad08c:
    // 0x2ad08c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ad08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ad090: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ad090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad094: 0x24a5b008  addiu       $a1, $a1, -0x4FF8
    ctx->pc = 0x2ad094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946824));
    // 0x2ad098: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2AD098u;
    SET_GPR_U32(ctx, 31, 0x2AD0A0u);
    ctx->pc = 0x2AD09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD098u;
    // 0x2ad09c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2AD098u, 0x2AD0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0A0u;
label_2ad0a0:
    // 0x2ad0a0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2ad0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_2ad0a4:
    // 0x2ad0a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ad0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad0a8: 0xc08047e  jal         func_2011F8
    ctx->pc = 0x2AD0A8u;
    SET_GPR_U32(ctx, 31, 0x2AD0B0u);
    ctx->pc = 0x2AD0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD0A8u;
    // 0x2ad0ac: 0x24843f20  addiu       $a0, $a0, 0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2011F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2011F8u, 0x2AD0A8u, 0x2AD0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0B0u;
label_2ad0b0:
    // 0x2ad0b0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AD0B0u;
    {
        const bool branch_taken_0x2ad0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0B0u;
        // 0x2ad0b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0b0) {
            ctx->pc = 0x2AD0E0u;
            goto label_2ad0e0;
        }
    }
    ctx->pc = 0x2AD0B8u;
    // 0x2ad0b8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ad0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ad0bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ad0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad0c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ad0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad0c4: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2AD0C4u;
    SET_GPR_U32(ctx, 31, 0x2AD0CCu);
    ctx->pc = 0x2AD0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD0C4u;
    // 0x2ad0c8: 0x24a5af80  addiu       $a1, $a1, -0x5080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2AD0C4u, 0x2AD0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0CCu;
label_2ad0cc:
    // 0x2ad0cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ad0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad0d0: 0xc0e95f1  jal         func_3A57C4
    ctx->pc = 0x2AD0D0u;
    SET_GPR_U32(ctx, 31, 0x2AD0D8u);
    ctx->pc = 0x2AD0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD0D0u;
    // 0x2ad0d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x2AD0D0u, 0x2AD0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0D8u;
label_2ad0d8:
    // 0x2ad0d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD0D8u;
    {
        const bool branch_taken_0x2ad0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0D8u;
        // 0x2ad0dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad0d8) {
            ctx->pc = 0x2AD0ECu;
            goto label_2ad0ec;
        }
    }
    ctx->pc = 0x2AD0E0u;
label_2ad0e0:
    // 0x2ad0e0: 0xc0e95f1  jal         func_3A57C4
    ctx->pc = 0x2AD0E0u;
    SET_GPR_U32(ctx, 31, 0x2AD0E8u);
    ctx->pc = 0x2AD0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD0E0u;
    // 0x2ad0e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x2AD0E0u, 0x2AD0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD0E8u;
label_2ad0e8:
    // 0x2ad0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ad0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad0ec:
    // 0x2ad0ec: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2ad0ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ad0f0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2ad0f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ad0f4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2ad0f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ad0f8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ad0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ad0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0FCu;
        // 0x2ad100: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD104u;
    // 0x2ad104: 0x0  nop
    ctx->pc = 0x2ad104u;
    // NOP
    ctx->pc = 0x2ad108u;
}
