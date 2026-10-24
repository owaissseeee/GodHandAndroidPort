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

// Function: _sceCallCode
// Address: 0x3b5120 - 0x3b52f0
void _sceCallCode_0x3b5120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCallCode_0x3b5120");
#endif

    switch (ctx->pc) {
        case 0x3b5160u: goto label_3b5160;
        case 0x3b5178u: goto label_3b5178;
        case 0x3b51a0u: goto label_3b51a0;
        case 0x3b520cu: goto label_3b520c;
        case 0x3b524cu: goto label_3b524c;
        case 0x3b525cu: goto label_3b525c;
        case 0x3b5264u: goto label_3b5264;
        case 0x3b5278u: goto label_3b5278;
        case 0x3b5288u: goto label_3b5288;
        case 0x3b5298u: goto label_3b5298;
        case 0x3b52a0u: goto label_3b52a0;
        default: break;
    }

    ctx->pc = 0x3b5120u;

    // 0x3b5120: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3b5120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3b5124: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x3b5124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x3b5128: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3b5128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x3b512c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3b512cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b5130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5134: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x3b5134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x3b5138: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3b5138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3b513c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3b513cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5140: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3b5140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x3b5144: 0x3c170078  lui         $s7, 0x78
    ctx->pc = 0x3b5144u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)120 << 16));
    // 0x3b5148: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x3b5148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x3b514c: 0x26f3ffc0  addiu       $s3, $s7, -0x40
    ctx->pc = 0x3b514cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967232));
    // 0x3b5150: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3b5150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3b5154: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3b5154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3b5158: 0xc0ecfb2  jal         func_3B3EC8
    ctx->pc = 0x3B5158u;
    SET_GPR_U32(ctx, 31, 0x3B5160u);
    ctx->pc = 0x3B515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5158u;
    // 0x3b515c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EC8u, 0x3B5158u, 0x3B5160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5160u;
label_3b5160:
    // 0x3b5160: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b5160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b5164: 0x8c43aedc  lw          $v1, -0x5124($v0)
    ctx->pc = 0x3b5164u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAEDCu));
    // 0x3b5168: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B5168u;
    {
        const bool branch_taken_0x3b5168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5168) {
            ctx->pc = 0x3B516Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B5168u;
            // 0x3b516c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B517Cu;
            goto label_3b517c;
        }
    }
    ctx->pc = 0x3B5170u;
    // 0x3b5170: 0xc0ecfd4  jal         func_3B3F50
    ctx->pc = 0x3B5170u;
    SET_GPR_U32(ctx, 31, 0x3B5178u);
    ctx->pc = 0x3B3F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3F50u, 0x3B5170u, 0x3B5178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5178u;
label_3b5178:
    // 0x3b5178: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3b5178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3b517c:
    // 0x3b517c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3b517cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5180: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x3b5180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3b5184: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B5184u;
    {
        const bool branch_taken_0x3b5184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5184u;
        // 0x3b5188: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5184) {
            ctx->pc = 0x3B51CCu;
            goto label_3b51cc;
        }
    }
    ctx->pc = 0x3B518Cu;
    // 0x3b518c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3b518cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3b5190: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3b5190u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b5194: 0x3c150078  lui         $s5, 0x78
    ctx->pc = 0x3b5194u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)120 << 16));
    // 0x3b5198: 0x3c140078  lui         $s4, 0x78
    ctx->pc = 0x3b5198u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)120 << 16));
    // 0x3b519c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b519cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b51a0:
    // 0x3b51a0: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x3b51a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x3b51a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B51A4u;
    {
        const bool branch_taken_0x3b51a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B51A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51A4u;
        // 0x3b51a8: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b51a4) {
            ctx->pc = 0x3B51DCu;
            goto label_3b51dc;
        }
    }
    ctx->pc = 0x3B51ACu;
    // 0x3b51ac: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x3b51acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x3b51b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3b51b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b51b4: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x3b51b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b51b8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3b51b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3b51bc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B51BCu;
    {
        const bool branch_taken_0x3b51bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b51bc) {
            ctx->pc = 0x3B51C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B51BCu;
            // 0x3b51c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B51A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b51a0;
        }
    }
    ctx->pc = 0x3B51C4u;
    // 0x3b51c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B51C4u;
    {
        const bool branch_taken_0x3b51c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B51C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51C4u;
        // 0x3b51c8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b51c4) {
            ctx->pc = 0x3B51E0u;
            goto label_3b51e0;
        }
    }
    ctx->pc = 0x3B51CCu;
label_3b51cc:
    // 0x3b51cc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3b51ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3b51d0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3b51d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b51d4: 0x3c150078  lui         $s5, 0x78
    ctx->pc = 0x3b51d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)120 << 16));
    // 0x3b51d8: 0x3c140078  lui         $s4, 0x78
    ctx->pc = 0x3b51d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)120 << 16));
label_3b51dc:
    // 0x3b51dc: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3b51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3b51e0:
    // 0x3b51e0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B51E0u;
    {
        const bool branch_taken_0x3b51e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51E0u;
        // 0x3b51e4: 0x24a201c8  addiu       $v0, $a1, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b51e0) {
            ctx->pc = 0x3B51F0u;
            goto label_3b51f0;
        }
    }
    ctx->pc = 0x3B51E8u;
    // 0x3b51e8: 0xa260040b  sb          $zero, 0x40B($s3)
    ctx->pc = 0x3b51e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b51ec: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x3b51ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_3b51f0:
    // 0x3b51f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b51f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b51f4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3b51f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3b51f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3b51f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b51fc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3b51fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x3b5200: 0x26940c00  addiu       $s4, $s4, 0xC00
    ctx->pc = 0x3b5200u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3072));
    // 0x3b5204: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B5204u;
    SET_GPR_U32(ctx, 31, 0x3B520Cu);
    ctx->pc = 0x3B5208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5204u;
    // 0x3b5208: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B5204u, 0x3B520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B520Cu;
label_3b520c:
    // 0x3b520c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b520cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5210: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3b5210u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3b5214: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b5214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b5218: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x3b5218u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x3b521c: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3b521cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x3b5220: 0x26a416c0  addiu       $a0, $s5, 0x16C0
    ctx->pc = 0x3b5220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 5824));
    // 0x3b5224: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b5224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5228: 0x26e7ffc0  addiu       $a3, $s7, -0x40
    ctx->pc = 0x3b5228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967232));
    // 0x3b522c: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x3b522cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x3b5230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b5230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5234: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b5234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b5238: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3b5238u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b523c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3b523cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3b5240: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3b5240u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b5244: 0xc0ece56  jal         func_3B3958
    ctx->pc = 0x3B5244u;
    SET_GPR_U32(ctx, 31, 0x3B524Cu);
    ctx->pc = 0x3B5248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5244u;
    // 0x3b5248: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3958u, 0x3B5244u, 0x3B524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B524Cu;
label_3b524c:
    // 0x3b524c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B524Cu;
    {
        const bool branch_taken_0x3b524c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B524Cu;
        // 0x3b5250: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b524c) {
            ctx->pc = 0x3B526Cu;
            goto label_3b526c;
        }
    }
    ctx->pc = 0x3B5254u;
    // 0x3b5254: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B5254u;
    SET_GPR_U32(ctx, 31, 0x3B525Cu);
    ctx->pc = 0x3B5258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5254u;
    // 0x3b5258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B5254u, 0x3B525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B525Cu;
label_3b525c:
    // 0x3b525c: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B525Cu;
    SET_GPR_U32(ctx, 31, 0x3B5264u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B525Cu, 0x3B5264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5264u;
label_3b5264:
    // 0x3b5264: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B5264u;
    {
        const bool branch_taken_0x3b5264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5264u;
        // 0x3b5268: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5264) {
            ctx->pc = 0x3B52A4u;
            goto label_3b52a4;
        }
    }
    ctx->pc = 0x3B526Cu;
label_3b526c:
    // 0x3b526c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x3b526cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x3b5270: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B5270u;
    SET_GPR_U32(ctx, 31, 0x3B5278u);
    ctx->pc = 0x3B5274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5270u;
    // 0x3b5274: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B5270u, 0x3B5278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5278u;
label_3b5278:
    // 0x3b5278: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B5278u;
    {
        const bool branch_taken_0x3b5278 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5278) {
            ctx->pc = 0x3B5290u;
            goto label_3b5290;
        }
    }
    ctx->pc = 0x3B5280u;
    // 0x3b5280: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B5280u;
    SET_GPR_U32(ctx, 31, 0x3B5288u);
    ctx->pc = 0x3B5284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5280u;
    // 0x3b5284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B5280u, 0x3B5288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5288u;
label_3b5288:
    // 0x3b5288: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B5288u;
    {
        const bool branch_taken_0x3b5288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5288u;
        // 0x3b528c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5288) {
            ctx->pc = 0x3B52A4u;
            goto label_3b52a4;
        }
    }
    ctx->pc = 0x3B5290u;
label_3b5290:
    // 0x3b5290: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B5290u;
    SET_GPR_U32(ctx, 31, 0x3B5298u);
    ctx->pc = 0x3B5294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5290u;
    // 0x3b5294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B5290u, 0x3B5298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5298u;
label_3b5298:
    // 0x3b5298: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B5298u;
    SET_GPR_U32(ctx, 31, 0x3B52A0u);
    ctx->pc = 0x3B529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5298u;
    // 0x3b529c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B5298u, 0x3B52A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B52A0u;
label_3b52a0:
    // 0x3b52a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3b52a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3b52a4:
    // 0x3b52a4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3b52a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3b52a8: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x3b52a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3b52ac: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x3b52acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b52b0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x3b52b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b52b4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3b52b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b52b8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3b52b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b52bc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3b52bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b52c0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3b52c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b52c4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3b52c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b52c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B52C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B52CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B52C8u;
        // 0x3b52cc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B52C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B52D0u;
    // 0x3b52d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3b52d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b52d4: 0x0  nop
    ctx->pc = 0x3b52d4u;
    // NOP
    // 0x3b52d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3b52d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b52dc: 0x0  nop
    ctx->pc = 0x3b52dcu;
    // NOP
    // 0x3b52e0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x3b52e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3b52e4: 0x0  nop
    ctx->pc = 0x3b52e4u;
    // NOP
    // 0x3b52e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3b52e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b52ec: 0x0  nop
    ctx->pc = 0x3b52ecu;
    // NOP
    ctx->pc = 0x3b52f0u;
}
