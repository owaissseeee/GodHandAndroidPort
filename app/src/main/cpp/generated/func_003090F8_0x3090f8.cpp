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

// Function: func_003090F8
// Address: 0x3090f8 - 0x3092e0
void func_003090F8_0x3090f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003090F8_0x3090f8");
#endif

    switch (ctx->pc) {
        case 0x309188u: goto label_309188;
        case 0x3091a4u: goto label_3091a4;
        case 0x3091b8u: goto label_3091b8;
        default: break;
    }

    ctx->pc = 0x3090f8u;

    // 0x3090f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3090f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3090fc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3090fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x309100: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x309100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x309104: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x309104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x309108: 0x309400ff  andi        $s4, $a0, 0xFF
    ctx->pc = 0x309108u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30910c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x30910cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x309110: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x309110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x309114: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x309114u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309118: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x309118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x30911c: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x30911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x309120: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x309120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x309124: 0x27d00080  addiu       $s0, $fp, 0x80
    ctx->pc = 0x309124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
    // 0x309128: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x309128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x30912c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x30912cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x309130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x309130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x309134: 0x93c30005  lbu         $v1, 0x5($fp)
    ctx->pc = 0x309134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 5)));
    // 0x309138: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x309138u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x30913c: 0x2ce21c00  sltiu       $v0, $a3, 0x1C00
    ctx->pc = 0x30913cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)7168) ? 1 : 0);
    // 0x309140: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x309140u;
    {
        const bool branch_taken_0x309140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309140u;
        // 0x309144: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309140) {
            ctx->pc = 0x309164u;
            goto label_309164;
        }
    }
    ctx->pc = 0x309148u;
    // 0x309148: 0x24e3e400  addiu       $v1, $a3, -0x1C00
    ctx->pc = 0x309148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960128));
    // 0x30914c: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x30914cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x309150: 0x39142  srl         $s2, $v1, 5
    ctx->pc = 0x309150u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x309154: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x309154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x309158: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x309158u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x30915c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30915Cu;
    {
        const bool branch_taken_0x30915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30915Cu;
        // 0x309160: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30915c) {
            ctx->pc = 0x309170u;
            goto label_309170;
        }
    }
    ctx->pc = 0x309164u;
label_309164:
    // 0x309164: 0x24e2e400  addiu       $v0, $a3, -0x1C00
    ctx->pc = 0x309164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960128));
    // 0x309168: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x309168u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x30916c: 0x24520020  addiu       $s2, $v0, 0x20
    ctx->pc = 0x30916cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_309170:
    // 0x309170: 0x97c20006  lhu         $v0, 0x6($fp)
    ctx->pc = 0x309170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 6)));
    // 0x309174: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x309174u;
    {
        const bool branch_taken_0x309174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309174u;
        // 0x309178: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309174) {
            ctx->pc = 0x3092A4u;
            goto label_3092a4;
        }
    }
    ctx->pc = 0x30917Cu;
    // 0x30917c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x30917cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x309180: 0x24567ba0  addiu       $s6, $v0, 0x7BA0
    ctx->pc = 0x309180u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 31648));
    // 0x309184: 0x0  nop
    ctx->pc = 0x309184u;
    // NOP
label_309188:
    // 0x309188: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x309188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x30918c: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x30918cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309190: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x309190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x309194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309198: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x309198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30919c: 0xc0c24b8  jal         func_3092E0
    ctx->pc = 0x30919Cu;
    SET_GPR_U32(ctx, 31, 0x3091A4u);
    ctx->pc = 0x3091A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30919Cu;
    // 0x3091a0: 0x568821  addu        $s1, $v0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3092E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3092E0u, 0x30919Cu, 0x3091A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3091A4u;
label_3091a4:
    // 0x3091a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3091a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3091a8: 0xa2320003  sb          $s2, 0x3($s1)
    ctx->pc = 0x3091a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x3091ac: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3091acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3091b0: 0xc0c255a  jal         func_309568
    ctx->pc = 0x3091B0u;
    SET_GPR_U32(ctx, 31, 0x3091B8u);
    ctx->pc = 0x3091B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3091B0u;
    // 0x3091b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309568u, 0x3091B0u, 0x3091B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3091B8u;
label_3091b8:
    // 0x3091b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3091b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3091bc: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x3091bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3091c0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3091c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3091c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3091c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3091c8: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3091c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3091cc: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x3091ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3091d0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3091D0u;
    {
        const bool branch_taken_0x3091d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3091D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091D0u;
        // 0x3091d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091d0) {
            ctx->pc = 0x309234u;
            goto label_309234;
        }
    }
    ctx->pc = 0x3091D8u;
    // 0x3091d8: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x3091d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x3091dc: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3091DCu;
    {
        const bool branch_taken_0x3091dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3091E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091DCu;
        // 0x3091e0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091dc) {
            ctx->pc = 0x3091F4u;
            goto label_3091f4;
        }
    }
    ctx->pc = 0x3091E4u;
    // 0x3091e4: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3091E4u;
    {
        const bool branch_taken_0x3091e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3091E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091E4u;
        // 0x3091e8: 0x240200b0  addiu       $v0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091e4) {
            ctx->pc = 0x309214u;
            goto label_309214;
        }
    }
    ctx->pc = 0x3091ECu;
    // 0x3091ec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3091ECu;
    {
        const bool branch_taken_0x3091ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3091F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091ECu;
        // 0x3091f0: 0x2f31823  subu        $v1, $s7, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091ec) {
            ctx->pc = 0x30923Cu;
            goto label_30923c;
        }
    }
    ctx->pc = 0x3091F4u;
label_3091f4:
    // 0x3091f4: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x3091f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3091f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3091f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3091fc: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x3091fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x309200: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x309200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x309204: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x309204u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x309208: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x309208u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x30920c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30920Cu;
    {
        const bool branch_taken_0x30920c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30920Cu;
        // 0x309210: 0x21103  sra         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30920c) {
            ctx->pc = 0x309230u;
            goto label_309230;
        }
    }
    ctx->pc = 0x309214u;
label_309214:
    // 0x309214: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x309214u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x309218: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x309218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30921c: 0x244400ff  addiu       $a0, $v0, 0xFF
    ctx->pc = 0x30921cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x309220: 0x244201fe  addiu       $v0, $v0, 0x1FE
    ctx->pc = 0x309220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 510));
    // 0x309224: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x309224u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x309228: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x309228u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x30922c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x30922cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_309230:
    // 0x309230: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x309230u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_309234:
    // 0x309234: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x309234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x309238: 0x2f31823  subu        $v1, $s7, $s3
    ctx->pc = 0x309238u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
label_30923c:
    // 0x30923c: 0x2822818  mult        $a1, $s4, $v0
    ctx->pc = 0x30923cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x309240: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x309240u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x309244: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x309244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x309248: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x309248u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30924c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30924cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309250: 0xb62021  addu        $a0, $a1, $s6
    ctx->pc = 0x309250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x309254: 0x2c53021  addu        $a2, $s6, $a1
    ctx->pc = 0x309254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x309258: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x309258u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x30925c: 0xac900008  sw          $s0, 0x8($a0)
    ctx->pc = 0x30925cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 16));
    // 0x309260: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x309260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x309264: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x309264u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x309268: 0x24637bc0  addiu       $v1, $v1, 0x7BC0
    ctx->pc = 0x309268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31680));
    // 0x30926c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x30926cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x309270: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x309270u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x309274: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x309274u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x309278: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x309278u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x30927c: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x30927cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x309280: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x309280u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x309284: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x309284u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x309288: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x309288u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30928c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x30928cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x309290: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x309290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309294: 0x97c20006  lhu         $v0, 0x6($fp)
    ctx->pc = 0x309294u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 6)));
    // 0x309298: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x309298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30929c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x30929Cu;
    {
        const bool branch_taken_0x30929c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3092A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30929Cu;
        // 0x3092a0: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30929c) {
            ctx->pc = 0x309188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309188;
        }
    }
    ctx->pc = 0x3092A4u;
label_3092a4:
    // 0x3092a4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3092a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3092a8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3092a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3092ac: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3092acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3092b0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3092b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3092b4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3092b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3092b8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3092b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3092bc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3092bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3092c0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3092c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3092c4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3092c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3092c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3092c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3092cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3092CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3092D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092CCu;
        // 0x3092d0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3092CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3092D4u;
    // 0x3092d4: 0x0  nop
    ctx->pc = 0x3092d4u;
    // NOP
    // 0x3092d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3092d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3092dc: 0x0  nop
    ctx->pc = 0x3092dcu;
    // NOP
    ctx->pc = 0x3092e0u;
}
