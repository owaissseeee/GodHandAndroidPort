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

// Function: func_00150AA8
// Address: 0x150aa8 - 0x150c10
void func_00150AA8_0x150aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00150AA8_0x150aa8");
#endif

    switch (ctx->pc) {
        case 0x150aecu: goto label_150aec;
        case 0x150b1cu: goto label_150b1c;
        case 0x150b40u: goto label_150b40;
        case 0x150b64u: goto label_150b64;
        case 0x150b88u: goto label_150b88;
        case 0x150bd0u: goto label_150bd0;
        default: break;
    }

    ctx->pc = 0x150aa8u;

    // 0x150aa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x150aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x150aac: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x150aacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x150ab0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x150ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x150ab4: 0x2508ecc0  addiu       $t0, $t0, -0x1340
    ctx->pc = 0x150ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962368));
    // 0x150ab8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x150ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x150abc: 0x3c100003  lui         $s0, 0x3
    ctx->pc = 0x150abcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)3 << 16));
    // 0x150ac0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x150ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x150ac4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x150ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ac8: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x150ac8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
    // 0x150acc: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x150accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x150ad0: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x150ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x150ad4: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x150ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x150ad8: 0x960978a8  lhu         $t1, 0x78A8($s0)
    ctx->pc = 0x150ad8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30888)));
    // 0x150adc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ae0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x150ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x150ae4: 0xc0b836a  jal         func_2E0DA8
    ctx->pc = 0x150AE4u;
    SET_GPR_U32(ctx, 31, 0x150AECu);
    ctx->pc = 0x150AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150AE4u;
    // 0x150ae8: 0x240a01c2  addiu       $t2, $zero, 0x1C2 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DA8u, 0x150AE4u, 0x150AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150AECu;
label_150aec:
    // 0x150aec: 0x920978aa  lbu         $t1, 0x78AA($s0)
    ctx->pc = 0x150aecu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30890)));
    // 0x150af0: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x150af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x150af4: 0x920a78ab  lbu         $t2, 0x78AB($s0)
    ctx->pc = 0x150af4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30891)));
    // 0x150af8: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x150af8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x150afc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x150afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x150b00: 0x2508ecd8  addiu       $t0, $t0, -0x1328
    ctx->pc = 0x150b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962392));
    // 0x150b04: 0x12a5821  addu        $t3, $t1, $t2
    ctx->pc = 0x150b04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x150b08: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x150b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x150b0c: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x150b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x150b10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b14: 0xc0b836a  jal         func_2E0DA8
    ctx->pc = 0x150B14u;
    SET_GPR_U32(ctx, 31, 0x150B1Cu);
    ctx->pc = 0x150B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B14u;
    // 0x150b18: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DA8u, 0x150B14u, 0x150B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B1Cu;
label_150b1c:
    // 0x150b1c: 0x8e095c60  lw          $t1, 0x5C60($s0)
    ctx->pc = 0x150b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23648)));
    // 0x150b20: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x150b20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x150b24: 0x8e0a5c64  lw          $t2, 0x5C64($s0)
    ctx->pc = 0x150b24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23652)));
    // 0x150b28: 0x2508ed08  addiu       $t0, $t0, -0x12F8
    ctx->pc = 0x150b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962440));
    // 0x150b2c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x150b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x150b30: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x150b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x150b34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b38: 0xc0b836a  jal         func_2E0DA8
    ctx->pc = 0x150B38u;
    SET_GPR_U32(ctx, 31, 0x150B40u);
    ctx->pc = 0x150B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B38u;
    // 0x150b3c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DA8u, 0x150B38u, 0x150B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B40u;
label_150b40:
    // 0x150b40: 0x8e095c78  lw          $t1, 0x5C78($s0)
    ctx->pc = 0x150b40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23672)));
    // 0x150b44: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x150b44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x150b48: 0x8e0a5c7c  lw          $t2, 0x5C7C($s0)
    ctx->pc = 0x150b48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23676)));
    // 0x150b4c: 0x2508ed28  addiu       $t0, $t0, -0x12D8
    ctx->pc = 0x150b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962472));
    // 0x150b50: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x150b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x150b54: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x150b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x150b58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b5c: 0xc0b836a  jal         func_2E0DA8
    ctx->pc = 0x150B5Cu;
    SET_GPR_U32(ctx, 31, 0x150B64u);
    ctx->pc = 0x150B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B5Cu;
    // 0x150b60: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DA8u, 0x150B5Cu, 0x150B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B64u;
label_150b64:
    // 0x150b64: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x150b64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x150b68: 0x8e095c6c  lw          $t1, 0x5C6C($s0)
    ctx->pc = 0x150b68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23660)));
    // 0x150b6c: 0x8e0a5c70  lw          $t2, 0x5C70($s0)
    ctx->pc = 0x150b6cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23664)));
    // 0x150b70: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x150b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x150b74: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x150b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x150b78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b7c: 0x2508ed48  addiu       $t0, $t0, -0x12B8
    ctx->pc = 0x150b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962504));
    // 0x150b80: 0xc0b836a  jal         func_2E0DA8
    ctx->pc = 0x150B80u;
    SET_GPR_U32(ctx, 31, 0x150B88u);
    ctx->pc = 0x150B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B80u;
    // 0x150b84: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DA8u, 0x150B80u, 0x150B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B88u;
label_150b88:
    // 0x150b88: 0x24032800  addiu       $v1, $zero, 0x2800
    ctx->pc = 0x150b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x150b8c: 0x24041c20  addiu       $a0, $zero, 0x1C20
    ctx->pc = 0x150b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7200));
    // 0x150b90: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x150b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x150b94: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x150b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x150b98: 0xae240038  sw          $a0, 0x38($s1)
    ctx->pc = 0x150b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
    // 0x150b9c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x150b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x150ba0: 0xae045c7c  sw          $a0, 0x5C7C($s0)
    ctx->pc = 0x150ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23676), GPR_U32(ctx, 4));
    // 0x150ba4: 0x3442dc50  ori         $v0, $v0, 0xDC50
    ctx->pc = 0x150ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56400);
    // 0x150ba8: 0xae035c78  sw          $v1, 0x5C78($s0)
    ctx->pc = 0x150ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23672), GPR_U32(ctx, 3));
    // 0x150bac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x150bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x150bb0: 0xa60078a8  sh          $zero, 0x78A8($s0)
    ctx->pc = 0x150bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30888), (uint16_t)GPR_U32(ctx, 0));
    // 0x150bb4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x150bb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x150bb8: 0xae035c60  sw          $v1, 0x5C60($s0)
    ctx->pc = 0x150bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23648), GPR_U32(ctx, 3));
    // 0x150bbc: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x150bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x150bc0: 0xae045c64  sw          $a0, 0x5C64($s0)
    ctx->pc = 0x150bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23652), GPR_U32(ctx, 4));
    // 0x150bc4: 0xae035c6c  sw          $v1, 0x5C6C($s0)
    ctx->pc = 0x150bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23660), GPR_U32(ctx, 3));
    // 0x150bc8: 0xae045c70  sw          $a0, 0x5C70($s0)
    ctx->pc = 0x150bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23664), GPR_U32(ctx, 4));
    // 0x150bcc: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x150bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_150bd0:
    // 0x150bd0: 0xac45ed40  sw          $a1, -0x12C0($v0)
    ctx->pc = 0x150bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294962496), GPR_U32(ctx, 5));
    // 0x150bd4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x150bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x150bd8: 0xac45f6a0  sw          $a1, -0x960($v0)
    ctx->pc = 0x150bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964896), GPR_U32(ctx, 5));
    // 0x150bdc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x150bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x150be0: 0x14c0fffb  bnez        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x150BE0u;
    {
        const bool branch_taken_0x150be0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x150BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150BE0u;
        // 0x150be4: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150be0) {
            ctx->pc = 0x150BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150bd0;
        }
    }
    ctx->pc = 0x150BE8u;
    // 0x150be8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x150be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x150bec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x150becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150bf0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x150bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x150bf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x150bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150bf8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x150bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x150bfc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x150bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150c00: 0xa04078ab  sb          $zero, 0x78AB($v0)
    ctx->pc = 0x150c00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 30891), (uint8_t)GPR_U32(ctx, 0));
    // 0x150c04: 0xa04078aa  sb          $zero, 0x78AA($v0)
    ctx->pc = 0x150c04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 30890), (uint8_t)GPR_U32(ctx, 0));
    // 0x150c08: 0x3e00008  jr          $ra
    ctx->pc = 0x150C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C08u;
        // 0x150c0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150C10u;
}
